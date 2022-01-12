#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,j,k;
    int space=n-1;
	cin>>n;
	int num=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=space;j++)
		{
			cout<<" ";
		}
		for(k=num;k>=1;k--)
		{
		    
			cout<<k;
		}
		if(space>i)
		{
			space=space-1;
			num=num+2;
		}
		if(space<i)
		{
			space=space+1;
			num=num-2;
		}
		cout<<"\n";
	}
}
