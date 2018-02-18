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
		ll i,j,k;
		ll s;
		ll odd_size=0;
		ll even_size=0;
		for(i=0;i<n;i++)
		{
			cin>>k;
			if(k%2==0)
				{
					//even.push_back(k);
					even_size++;
				}
			else 
				{
					//odd.push_back(k);
					odd_size++;
				}
		}
		//if(odd_size==1 && even_size==1)
			//cout<<2<<endl;

		if(odd_size%2==0)
		{
			even_size++;
			odd_size=0;
		}
		if(odd_size%2==1)
		{
			even_size++;
			odd_size=1;
		}
		even_size=1;
		cout<<odd_size+even_size<<endl;
	}
	return 0;
}