#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int count=0;
	do
	{	
		long long n,s;
		cin>>n>>s;	
		long long arr[n];
		for (int i=0;i<n;i++) 
		{
			cin>>arr[i];
		}
		sort(arr, arr+n);
		int res = -1;
		for(int i=0;i<n;i++)
		{
			if((arr[i]*(n-i))==s)
			{
				res = arr[i];
				break;
			}
		}
		cout<<res<<endl;
		count++;
	}while(count<t);
	return 0;
}
