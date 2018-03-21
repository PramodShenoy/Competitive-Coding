#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		cout.precision(17);
		ll n,i,j;
		cin>>n;
		double price[n],qty[n],disc[n],loss[n];
		double net=0.0;
		for(i=0;i<n;i++)
			cin>>price[i]>>qty[i]>>disc[i];
		for(i=0;i<n;i++)
		{
			double inc = price[i]+(price[i] * ((double)disc[i]/100.0));
			double final = inc - (((double)disc[i]/100.0)*inc);
			loss[i] = (double)price[i]-(double)final;
			net+=(double)(qty[i]*loss[i]);
		}
		std::cout << std::setprecision (std::numeric_limits<double>::digits10 + 1)
          << net
          << std::endl;
	}
	return 0;
}