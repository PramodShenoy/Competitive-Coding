#include <bits/stdc++.h>
using namespace std;
//https://brilliant.org/wiki/trailing-number-of-zeros/
int main() {
	
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		int sum=0;
		int log5=log(x)/log(5);
		for(int i=1;i<=log5;i++)
		{
			sum+=floor(x/(pow(5,i)));
		}
		cout<<sum<<endl;

	}

	return 0;
}