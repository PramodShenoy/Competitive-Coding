#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,i,j;
		cin>>n;
		ll x;
		std::map<ll, ll> m;
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(m.find(x)==m.end())
			{
				m.insert(pair<ll,ll>(x,1));
			}
			else
				m[x]++;
		}
		ll c=0,cnt=0;
		for(auto itr = m.begin();itr!=m.end();itr++)
		{
			if(itr->second>1)
				{
					c+=itr->second;
					cnt++;
				}
		}
		if(c==0)
			cout<<c<<endl;
		else
			cout<<c-cnt<<endl;
		m.clear();
	}
	return 0;
}