#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
	ll n,k;
	cin>>n>>k;
	ll i,j;
	ll arr[n+1];
	for(i=1;i<=n;i++)
		cin>>arr[i];
	std::vector<ll> x;
	std::vector<ll> m;
	std::vector<ll> f;
	std::map<ll,ll> map;
	int flag=0;
	for(i=1;i<=n;i++)
	{
		flag=1;
		for(j=i;j<=n;j++)
		{
			if(flag==1)
				{
					m.push_back(arr[j]);
					x.push_back(arr[j]);
					f.push_back(m.back()*x.back());
					map.insert(pair<ll,ll>(f.back(),1));
					flag=0;
				}
			else
			{
				ll b =m.back(); 
				if(b>arr[j])
					m.push_back(arr[j]);
				else
					m.push_back(b);
				x.push_back(x.back()^arr[j]);
				f.push_back(m.back()*x.back());
									map.insert(pair<ll,ll>(f.back(),1));


			}
		}
	}
	sort(f.begin(),f.end());
	//for(auto  itr = map.begin();itr!=map.end();itr++)
	//	cout<<itr->first<<endl;
	std::map<ll, ll>::iterator it = map.begin();
	advance(it,k-1);
	cout<<it->first<<endl;
	return 0;
}
