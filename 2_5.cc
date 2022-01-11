#include<bits/stdc++.h>
#define N 7
using namespace std;
int main()
{
	int i,j;
	for(i=0;i<N;i++)
	{
        for(j=0;j<N;j++)
		{
            if (i==0 || j==0 || i == j || i==N-1 || j==N-1 || i+j==N-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
