/*
Example 1 : Consider the following 3 activities sorted by
by finish time.
     start[]  =  {10, 12, 20};
     finish[] =  {20, 25, 30};
A person can perform at most two activities. The 
maximum set of activities that can be executed 
is {0, 2} [ These are indexes in start[] and 
finish[] ]

Example 2 : Consider the following 6 activities 
sorted by by finish time.
     start[]  =  {1, 3, 0, 5, 8, 5};
     finish[] =  {2, 4, 6, 7, 9, 9};
A person can perform at most four activities. The 
maximum set of activities that can be executed 
is {0, 1, 3, 4} [ These are indexes in start[] and 
finish[] ]

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	int start[1000],finish[1000];
	printf("Enter the number of jobs:");
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		printf("Enter start time %d:",i+1);
		scanf("%d",&start[i]);
		printf("Enter end time %d:",i+1);
		scanf("%d",&finish[i]);
	}

	int i=0,j=0;
	printf("Showing indexes for activities:%d\t",i);
	for(j=1;j<N;j++)
	{
		if(start[j]>=finish[i])
		{
			printf("%d\t",j);
			i=j;
		}
	}
}