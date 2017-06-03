#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int isPrime(int a)
{
	int i,flag=0;
	if(a==2||a==3)
		return 1;
	else
	{
		for(i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{
				flag=0;
				return 0;
			}
			else
				flag=1;
		}
		if(flag==1)
			return 1;
	}
}

int fun(int l,int r,int x, int y,int a[] )
{
	int res=0;
	for(int i=x;i<=y;i++)
	{
		if(isPrime(i)==1)
		{
			//cout<<i<<endl;
			for(int j=l;j<=r;j++)
			{
				int number=a[j];
				int exp=0;
				while(number%i==0)
				{
					exp=exp+1;
					number=number/i;
				}
				res=res+exp;
			}
		}
	}
	return res;
}

int main()
{
	int n,l,r,x,y;
	int q;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>l>>r>>x>>y;
		int res=fun(l,r,x,y,a);
		cout<<res<<endl;
	}
	//cout<<isPrime(5);
	return 0;

}