#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll getClosest(ll val1, ll val2,
			ll target)
{
	if (target - val1 >= val2 - target)
		return val2;
	else
		return val2;
}
int main(int argc, char const *argv[])
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,h,i,j,k=INT_MAX,val,time;
		ll m = INT_MIN;
		cin>>n>>h;
		ll piles[n];
		ll s=0;
		for(i=0;i<n;i++)
			{
				cin>>piles[i];
				if(piles[i]>=m)
					m=piles[i];
				s+=piles[i];
			}
		sort(piles,piles+n);
		s=s/h;
		//cout<<s<<endl;
		ll lo=s;
		ll hi=m;
		while(hi>=lo)
		{
			ll mid = lo + (hi-lo)/2;
			time=0;
			for(j=0;j<n;j++)
			{
				if(piles[j]<=mid)
					time++;
				else
					time+=ceil((double)piles[j]/mid);
			}
			if(time<=h)
				hi=mid-1;
			else
				lo=mid+1;
		}
		cout<<lo<<endl;
	}
	return 0;
}