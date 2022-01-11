#include<bits/stdc++.h>
#define N 7
using namespace std;
int main()
{
	int i,j,k=1;
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			if(j<=k ||j>=N-k+1)
				cout<<j;
			else
				cout<<"*";
		}
		if(i<=N/2)
			k++;
		else
			k--;
		cout<<endl;
	}
}

