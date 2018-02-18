#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll k,d0,d1;
		cin>>k>>d0>>d1;
		ll sum = d0+d1;
		if(sum % 3 ==0 && k%3==0)
			cout<<"YES\n";
		else if (sum %3==0 && k%2==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}