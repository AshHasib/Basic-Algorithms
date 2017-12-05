#include<bits/stdc++.h>
using namespace std;


int maxSum(int a[],int n,int k);

int main()
{
	int A[1000];
	int N;
	int k,i;

	printf("Enter the size of the array:");
	scanf("%d",&N);
	printf("Enter elements:");
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter k:");
	scanf("%d",&k);

	printf("The maximum sum of subarray of size k is :%d\n",maxSum(A,N,k));
	return 0;
}

int maxSum(int a[],int n,int k)
{
	int result=0,current=0;

	printf("Initially calculating the initial subarray of size k. . .\n");
	for(int i=0;i<k;i++)
	{
		result+=a[i];
	}
	printf("Now the result is : %d\n",result);
	current=result;

	for(int i=k;i<n;i++)
	{
		current+=a[i]-a[i-k];
		printf("Current : %d\n",current);
		result=max(result,current);
		printf("Running result: %d\n",result);
	}
	return result;
}