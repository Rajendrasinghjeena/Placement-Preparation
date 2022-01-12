#include<iostream>
using namespace std;
int main()
{
	int j,i,n;
	cin>>n;
	int x=1;
	int y=n*2-1;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n*2;j++)
		{
			if(j==x||j==y)
			{
				cout<<char(i + 64);
			}
			else
			{
				cout<<" ";
			}
		}
		x++;
		y--;
		cout<<"\n";
	}
}
