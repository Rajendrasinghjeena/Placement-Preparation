#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=n;i>0;i--)
	{
		for(j=n;j>=i;j--)
		{
			cout<<j;
		}
		cout<<"\n";
	}for(i=0;i<=n;i++){
	
		for(j=n;j>=i;j--)
		{
			cout<<j;
		}
		cout<<"\n";
	}
}

