#include<bits/stdc++.h>
#define N 5
using namespace std;
int fact(int n)
{
	int i=1,fact=1;
	if(n==0 || n==1)
		return 1;
	while(i<=n)
	{
		fact*=i;
		i++;
	}
	return fact;
}
int main()
{
	int i,j,k;
	//cout<<fact(5);
	
	for(i=0;i<=N;i++)
	{
		for(j=0;j<=i;j++)
		{
			k=fact(i)/(fact(j)*fact(i-j));
			cout<<k<<" ";
		}
		cout<<endl;
	}
}

