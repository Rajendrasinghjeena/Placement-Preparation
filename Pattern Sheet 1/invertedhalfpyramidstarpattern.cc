#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=i;j>0;j--)
		{
			cout<<" ";
		}
		for(j=n-i;j>0;j--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
