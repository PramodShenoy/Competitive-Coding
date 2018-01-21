#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int i,n,j;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	//sort(arr,arr+n);
	//5 3 1 5 2 3
	long long sum=1;
	long long m=-1;
	int map[100000]={0};
	for(i=0;i<n;i++)
	{
		if(map[i]==0)
		{
			map[i]=1;
			if(map[i-1])
				map[i]++;
			else if(map[i+1])
				map[i]++;
		}
		else
			map[i]++;
	}
	return 0;
}