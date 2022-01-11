#include<bits/stdc++.h>
#define N 5
using namespace std;
int main()
{
	int i,j,k;
	for(i=0;i<N;i++)
	{
		for(j=0;j<i;j++)
			cout<<" ";
		for(j=0;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
	for(i=N-1;i>=1;i--)
	{
		for(j=i;j>1;j--)
			cout<<" ";
		for(j=i;j>=1;j--)
			cout<<"*";
		cout<<endl;
	}
}

