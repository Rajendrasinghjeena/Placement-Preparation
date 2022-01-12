#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	int a=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=2*i-1;k++)
		{
			if(k==1||k==2*i-1)
			{
				cout<<a;
				
			}
			else{
				cout<<" ";
			}
		}
		a++;
		cout<<"\n";
	}
	a=n-1;
	
		for(i=n-1;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			cout<<" ";
		}
		for(k=1;k<=2*i-1;k++)
		{
			if(k==1||k==2*i-1)
			{
				cout<<a;
				
			}
			else{
				cout<<" ";
			}
		}
		a--;
		cout<<"\n";
	}
 
}
