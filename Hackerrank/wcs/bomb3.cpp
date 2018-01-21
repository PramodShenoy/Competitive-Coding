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
	std::vector<int> index;
	for(i=0;i<1000001;i++)
	{
		if(map[i]>0 && map[i]>=m)
		{
			m=map[i];
			index.push_back(i);
		}
	}
	//cout<<m<<endl;
	long long sum=m;
	long long maxi=m;
	for(i=0;i<index.size();i++)
	{
		int j = index[i];
		if(map[j]==maxi && map[j+1]>map[j-1])
			sum=sum+map[j+1];
		else if(map[j]==maxi && map[j-1]>map[j+1])
			sum=sum+map[j-1];
		if(m<sum)
			{
				m=sum;
				sum=maxi;
			}
	}
	cout<<m<<endl;
	return 0;
}