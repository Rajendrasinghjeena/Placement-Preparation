#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=n-i;j>0;j--)
		{
			cout<<" ";
		}
		for(j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
