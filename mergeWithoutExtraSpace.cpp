#include <bits/stdc++.h>
using namespace std;

int nextGap(int gap)
{
	if (gap <= 1)
		return 0;
	return (gap / 2) + (gap % 2);
}
void merge(int a[], int b[], int m, int n)
{
	int i, j, gap = m + n;
	for (gap = nextGap(gap); gap > 0; gap = nextGap(gap))
	{
		//sorting the first array if imperfections
		for (i = 0; i + gap < m; i++)
		{
			if (a[i] > a[i + gap])
				swap(a[i], a[i + gap]);
		}
		//merging both the arrays
		for (j = gap > m ? gap - m : 0; i < m && j < n; i++, j++)
		{
			if (a[i] > b[j])
				swap(a[i], b[j]);
		}
		//sorting the second array
		if (j < m)
		{
			for (j = 0; j + gap < n; j++)
				if (b[j] > b[j + gap])
					swap(b[j], b[j + gap]);
		}
	}
	for (int i = 0; i < m; i++)
		cout << a[i] << " ";
	for (int i = 0; i < n; i++)
		cout << b[i] << " ";
}

int main()
{
	int a[4] = {1, 3, 5, 7};
	int b[5] = {0, 2, 6, 8, 9};
	merge(a, b, 4, 5);
}
