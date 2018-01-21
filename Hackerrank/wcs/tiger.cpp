#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m,k;
		cin>>n>>m>>k;
		long long res = (m+k-1)%n;
		if(res==0)
			cout<<n<<endl;
		else
			cout<<res<<endl;
	}
	return 0;
}