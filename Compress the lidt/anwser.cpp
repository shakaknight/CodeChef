// In The Name Of The Queen
#include<bits/stdc++.h>
using namespace std;
const int N = 109;
int q, n, A[N];
int main()
{
	scanf("%d", &q);
	for (; q; q --)
	{
		scanf("%d", &n);
		for (int i = 1; i <= n; i ++)
			scanf("%d", &A[i]);
		for (int i = 1; i <= n;)
		{
			if (i > 1)
				printf(",");
			int j = i + 1;
			while (j <= n && A[j] - A[i] == j - i)
				j ++;
			if (j - i >= 3)
				printf("%d...%d", A[i], A[j - 1]), i = j;
			else
				printf("%d", A[i]), i ++;
		}
		printf("\n");
	}
	return 0;
} 
