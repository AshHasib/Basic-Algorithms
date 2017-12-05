#include<bits/stdc++.h>
using namespace std;


int main()
{
	int A[10000];
	int N,i;
	set<int>S;

	scanf("%d",&N);

	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
	S.clear();
	set<int> :: iterator it;

	for(i=0;i<N;i++)
	{
		S.insert(A[i]);
		it=S.find(A[i]);
		it++;
		if(it!=S.end())
		{
			S.erase(it);
		}
	}	
	cout<<"LIS:"<<S.size()<<endl;

	return 0;
}