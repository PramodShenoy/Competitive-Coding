#include <bits/stdc++.h>
using namespace std;
long long change(long long n)
{
	if(n==0 || n==1)
		return n;
	else
		return (max(n,change(n/2)+change(n/3)+change(n/4)));
}
int main(int argc, char const *argv[])
{
	long long n;
	while(cin>>n){
		cout<<change(n)<<endl;
  }
	return 0;
}