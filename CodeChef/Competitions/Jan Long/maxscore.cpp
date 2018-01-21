#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc, char const *argv[])
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		ll i,j;
		cin>>n;
		ll arr[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		sort(arr[i], arr[i]+n, greater<ll>());
		}
		std::vector<ll> v;
		v.push_back(arr[n-1][0]);
		ll k=0;
		for(i=n-2;i>=0;i--)
		{
			for(j=0;j<n;j++)
			{
				if(arr[i][j]<v[k])
				{
					v.push_back(arr[i][j]);
					k++;
					break;
				}

			}
		}
		/*for (std::vector<ll>::iterator itr = v.begin(); itr != v.end(); ++itr)
		{
			cout<<*itr<<" ";
		}*/
		if(v.size()!=n)
			cout<<-1<<endl;
		else
		{
			ll sum_of_elems = std::accumulate(v.begin(), v.end(), 0L);
			cout<<sum_of_elems<<endl;
		}
	}
	return 0;
}