//Joe Tsai
#include <HX711_ADC.h>



int td=-10000; // countdown
unsigned long pt=0;
bool countdownStarted = false;

// 腳位設定:
const int HX711_dout = 4; // 微控制器 > HX711的dout腳位
const int HX711_sck = 5; // 微控制器 > HX711的sck腳位

// HX711建構函式:
HX711_ADC LoadCell(HX711_dout, HX711_sck);

const int calVal_eepromAdress = 0;
const int tareOffsetVal_eepromAdress = 4;
unsigned long t = 0; // time_now(紀錄目前當下時間)

void setup() {  
 

  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
  delay(10);
  Serial.println();
  Serial.println("啟動中..."); // initlializing

  LoadCell.begin();

  pinMode(10, OUTPUT); // 紅+鋒
  pinMode(11, OUTPUT); // 綠
  pinMode(7, OUTPUT);  // igniter
  pinMode(9, INPUT_PULLUP); // 大紅按鈕(嘿嘿)
  digitalWrite(7, LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  

  float calibrationValue; // 校準值（參見範例文件"Calibration.ino"）
  calibrationValue = 727.0; // 若要在程式中設定校準值，取消此行的註解

  long tare_offset = 9759552;
  LoadCell.setTareOffset(tare_offset);
  boolean _tare = false;

  unsigned long stabilizingtime = 2000;
  LoadCell.start(stabilizingtime, _tare);
  if (LoadCell.getTareTimeoutFlag()) {
    Serial.println("超時，請檢查微控制器 > HX711的連接和腳位");
    while (1);
  }
  else {
    LoadCell.setCalFactor(calibrationValue);
    Serial.println("啟動完成");
  }
  delay(100);
  digitalWrite(11,LOW);
}

void loop() {
  if (digitalRead(9) == LOW && !countdownStarted) {
    //countdownStarted = true;
    unsigned long startTime = millis();
  //  nt=millis();
  //  if(nt-pt>=10){
  //   td+=10;
  //   pt=nt;
  //      }
 
  
   if(millis()-pt>=10){
    td+=10;
    pt=millis();
   }
   
   if (td < 0) {
      digitalWrite(11,HIGH);
      if((-td)%1000 == 0) {digitalWrite(10,LOW);}
      else if((-td-500)%1000 == 0) {digitalWrite(10,HIGH);}
      /*
      switch (td) {
      	
        case -10000:
        case -9000:
        case -8000:
        case -7000:
        case -6000:
        case -5000:
        case -4000:
        case -3000:
        case -2000:
        case -1000:
          digitalWrite(10, LOW);
          break;
        case -9500:
        case -8500:
        case -7500:
        case -6500:
        case -5500:
        case -4500:
        case -3500:
        case -2500:
        case -1500:
        case -500:
          digitalWrite(10, HIGH);
          break;
      }
      */
    }
    else if (td == 0) {
      digitalWrite(7, HIGH); // ignition !!!!
      digitalWrite(10,LOW);
    }
    else if(td >= 1000){
      digitalWrite(7,LOW);
      digitalWrite(10,HIGH);
    }
    
  

  static boolean newDataReady = false;
  const int serialPrintInterval = 10;

  if (LoadCell.update()) {newDataReady = true;}

  if (newDataReady) {
     if (millis() > t + serialPrintInterval) {
      float i = LoadCell.getData();
      Serial.print(td);
      Serial.print(" ");
      Serial.println(i);
      Serial.flush();
     // td+=10;
      newDataReady = 0;
      t = millis();
    }
  }

	if (Serial.available() > 0) {
    char inByte = Serial.read();
    	if (inByte == 't') refreshOffsetValueAndSaveToEEprom();
  	}
  
  
  	else {
  		digitalWrite(7,LOW);
  		digitalWrite(10,HIGH);
  	}
  }
 
}


void refreshOffsetValueAndSaveToEEprom() {
  long _offset = 0;
  Serial.println("正在計算零點偏移值...");
  LoadCell.tare();
  _offset = LoadCell.getTareOffset();
  LoadCell.setTareOffset(_offset);
  Serial.print("新的零點偏移值: ");
  Serial.print(_offset);
  Serial.print("，保存到EEPROM地址: ");
  Serial.println(tareOffsetVal_eepromAdress);
  delay(10);
}