
int binary_search(int l, int r, int k)
{
	while (l <= r)
	{
		int m = (l+r) / 2;
		if (ary[m] == k)
		{
			return m;
		}
		// 目標在 m 往右，範圍限縮為 (m+1, r)
		if (ary[m] < k)
		{
			l = m+1;
		}
		// 目標在 m 往左，範圍限縮為 (l, m-1)
		else
		{
			r = m-1;
		}
	}
	return -1;
}n