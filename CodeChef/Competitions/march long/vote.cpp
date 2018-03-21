#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll find_sum(ll arr[],ll left,ll right,ll n)
{
	ll i,j,s=0;
	for(i=left+1;i<right;i++)
	{
		s+=arr[i];
	}
	return s;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,i,j,k;
		cin>>n;
		ll arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		ll val[n]={0};
		for(i=0;i<n;i++)
		{
			ll cur = arr[i];
			ll s=0;
			for(j=(i+1)%n;j!=i;j=(j+1)%n)
			{
				if(i<j)
					s=find_sum(arr,i,j,n);
				else
					s=find_sum(arr,j,i,n);
				if(s<=cur)
					val[j]++;
			}
		}
		for(k=0;k<n;k++)
				cout<<val[k]<<" ";
		cout<<endl;
	}
	return 0;
}