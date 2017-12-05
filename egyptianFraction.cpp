#include<bits/stdc++.h>

using namespace std;

void egyptian(int nr,int dr)
{
	if(dr==0||nr==0)
	{
		return;
	}
	if(dr%nr==0)
	{
		return;
	}

	if(nr%dr==0)
	{
		cout<<nr/dr<<endl;
		return;
	}
	if(nr>dr)
	{
		cout<<nr/dr<<"+";
		egyptian(nr%dr,dr);
		return;
	}

	int n=dr/nr+1;
	cout<<"1/"<<n<<"+";

	egyptian(nr*n-dr,dr*n);
}

int main()
{
	int n,d;

	printf("Enter number:");
	scanf("%d/%d",&n,&d);
	cout<<"The egyptian fraction of "<<n<<"/"
		<<d<<" is:\n";
	egyptian(n,d);

	return 0;
}
