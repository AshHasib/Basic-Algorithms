#include<bits/stdc++.h>
using namespace std;

int main()
{
	int A[10000];
	int N;
	int i;
	scanf("%d",&N);

	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	int LIS[N];
	for(i=0;i<N;i++)
	{
		LIS[i]=1;
	}

	for(i=0;i<N;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(A[j]<A[i])
			{
				if(LIS[i]<LIS[j]+1)
				{
					LIS[i]=LIS[j]+1;
				}
			}
		}
	}
	printf("Longest Increasing Subsequence :%d\n",*max_element(LIS,LIS+N));

	return 0;
}