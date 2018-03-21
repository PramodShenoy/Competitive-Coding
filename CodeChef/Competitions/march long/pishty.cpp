#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll i,j,n,q;
	cin>>n>>q;
	ll org[n];
	for(i=0;i<n;i++)
		cin>>org[i];

	while(q--)
	{
		ll type,p,v;
		cin>>type>>p>>v;
		if(type==1)
			org[p-1]=v;
		else if(type==2)
		{
			ll arr[n]={0};
			ll k=0;
			for(i=p-1;i<v;i++)
				arr[k++]=org[i];
			sort(arr,arr+k);
			ll tri=0,flag=0;
			for(i=k-1;i>=0;i--)
			{
				for(j=i-1;j>0;j--)
				{
					if(arr[j]+arr[j-1]>arr[i])
					{
						tri+=arr[j]+arr[j-1]+arr[i];
						flag = 1;
						break;
					}
				}
				if(flag==1)
					break;
			}
			cout<<tri<<endl;
		}
	}
	return 0;
}