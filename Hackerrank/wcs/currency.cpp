#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll price[n+1];
		ll i,j;
		ll maxi=0;
		//ll minId,maxId;
		for(i=1;i<=n;i++)
			cin>>price[i];
		ll profit=0;
		ll cur;
		maxi=price[n];
		for(i=n;i>0;i--)
		{
			cur=price[i];
			if(maxi>cur)
			{
				profit+=maxi-cur;
			}
			if(cur>maxi)
				maxi=cur;
		}
		cout<<profit<<endl;
	}
	return 0;
}