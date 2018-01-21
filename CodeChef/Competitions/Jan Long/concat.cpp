#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll kadane(ll arr[],ll n)
{
	ll max_so_far = INT_MIN;
	ll max_end = 0;
	for(ll i=0;i<n;i++)
	{
		ll ele=arr[i];
		max_end+= ele;
		if(max_end<0)
			max_end =0;
		if(max_so_far < max_end)
			max_so_far = max_end;
	}
	return max_so_far;
}
ll maxi(ll a[],ll n)
{
	ll m=INT_MIN;
	for(ll i=0;i<n;i++)
		if(a[i]>m)
			m=a[i];
	return m;
}
ll add(ll a[],ll n)
{
	ll s=0;
	for(ll i=0;i<n;i++)
		s+=a[i];
	return s;
}
int main(int argc, char const *argv[])
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,rep;
		ll i,j,k;
		cin>>n>>rep;
		ll a[n];
		ll neg=0,pos=0;
		for(i=0;i<n;i++)
			{
				cin>>a[i];
				if(a[i]<0)
					neg++;
				else
					pos++;
			}
		if(neg==n)
			cout<<maxi(a,n)<<endl;
		else if(pos==n)
			cout<<(add(a,n))*rep<<endl;
		else
		{
			ll arr[n*rep];
			k=0;
			for(i=0;i<rep;i++)
				for(j=0;j<n;j++)
					arr[k++]=a[j];
			ll res = kadane(arr,(n*rep));
			cout<<res<<endl;
		}

	}
	return 0;
}
