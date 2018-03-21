#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll i,j,c=0,f=0,g=0;
		ll fingers[n];
		ll glove[n];
		for(i=0;i<n;i++)
			cin>>fingers[i];
		for(i=0;i<n;i++)
			cin>>glove[i];
		for(i=0;i<n;i++)
		{
			if(fingers[i]<=glove[i])
				f++;
		}
		if(f==n)
			{
				c++;
				g=1;
			}
		f=0;
		for(i=0;i<n;i++)
		{
			if(fingers[i]<=glove[n-i-1])
				f++;
		}
		if(f==n)
			{
				c++;
				g=2;
			}
		if(c==0)
			cout<<"none\n";
		else if(c==1 && g==1)
			cout<<"front\n";
		else if(c==1 && g==2)
			cout<<"back\n";
		else if(c==2)
			cout<<"both\n";
	}
	return 0;
}