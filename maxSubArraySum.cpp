#include<bits/stdc++.h>

using namespace std;


int subSum(int a[],int n)
{
	int maxCur=0,maxSum=0;
	int i;
	for(i=0;i<n;i++)
	{
		maxCur+=a[i];
		if(maxSum<maxCur)
		{
			maxSum=maxCur;
		}
		if(maxCur<0)
		{
			maxCur=0;
		}
	}
	return maxSum;
}

int main()
{
	int A[1000];
	int N,i;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	int sum=subSum(A,N);

	printf("Sum is %d\n",sum);

	return 0;
}