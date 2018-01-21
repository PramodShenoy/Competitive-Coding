#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	long long i,j,sum=0;
	cin>>n;
	int arr[n];
	std::vector<int> v;
	for(i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]>0)
				{
					sum+=arr[i];
					v.push_back(i);
				}
		}
	if(sum>0)
		{
			cout<<sum<<endl;
			for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
				cout<<*i<<" ";
		}
	else
		cout<<-1<<endl;
	return 0;
}