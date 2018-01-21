#include <bits/stdc++.h>
using namespace std;
long long change_dp(long long n)
{
	long long table[100000]={0};
	for(long long i=0;i<=n;i++)
	{
		if(table[i]==0)
		{
			table[i]=max(i,(table[i/2])+(table[i/3])+(table[i/4]));
		}
	}
	return table[n];
}
long long change_rec(long long n)
{
	if(n==0 || n==1)
		return n;
	else
		return (max(n,change_rec(n/2)+change_rec(n/3)+change_rec(n/4)));
}
int main(int argc, char const *argv[])
{
	long long n;
	while(cin>>n){
		if(n>100000)
			cout<<change_rec(n)<<endl;
		else
			cout<<change_dp(n)<<endl;
  }
	return 0;
}