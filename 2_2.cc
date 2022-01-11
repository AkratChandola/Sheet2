#include<bits/stdc++.h>
#define N 5
using namespace std;
int main()
{
	int i,j,a=1,b=1,c;
	for(i=0;i<N;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i==0 && j==0)
				cout<<a;
			else if(i==1 && j==0)
				cout<<b;
			else
			{
				c=a+b;
				cout<<c<<" ";
				a=b;
				b=c;
			}
		}
		cout<<endl;
	}
}

