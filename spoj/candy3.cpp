#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,x;
		cin>>n;
		long long sum=0;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			sum+=x;
		}
		if(sum%n==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}