#include <bits/stdc++.h>
using namespace std;
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		std::vector<int> men;
		std::vector<int> women;
		int i,j,k;
		int x;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			men.push_back(x);
		}
		for(i=0;i<n;i++)
		{
			cin>>x;
			women.push_back(x);
		}
		sort(men.begin(),men.end());
		sort(women.begin(),women.end());
		int hot=0;
		for(i=0;i<n;i++)
		{
			hot+=men[i]*women[i];
		}
		cout<<hot<<endl;
	}

	return 0;
}