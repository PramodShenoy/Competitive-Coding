#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int i,n,j;
	cin>>n;
	int arr[n];
	long long m=-1;
	int map[1000001]={0};
	for(i=0;i<n;i++)
		{
			cin>>arr[i];
			map[arr[i]]++;
		}
	for(i=0;i<1000001;i++)
	{
		if(map[i+1]+map[i] > m)
		{
			m=map[i+1]+map[i];
		}
	}
	cout<<m<<endl;
	return 0;
}