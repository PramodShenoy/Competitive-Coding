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
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=arr[i];
			int temp = sum+(arr[i]*(n-i-1));
			if(temp==s)
			{
				res=arr[i];
				break;
			}
		}
		cout<<res<<endl;
		count++;
	}while(count<t);
	return 0;
}
