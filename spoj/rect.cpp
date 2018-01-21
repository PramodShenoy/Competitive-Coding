#include <bits/stdc++.h>
using namespace std;
int main() {
	int x;
	cin>>x;
	int sum=x;
	for(int i=2;i<=sqrt(x);i++)
	{
		sum+=(x/i)-(i-1);
	}
	cout<<sum<<endl;
	return 0;
}