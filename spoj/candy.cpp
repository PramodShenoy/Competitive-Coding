#include <bits/stdc++.h>
using namespace std;
//1 2 3 4 5 
int main() {
	
	int n;
	while(cin>>n)
	{
		if(n==-1)
			break;
		else
		{
			std::vector<int> v;
			int x;
			int avg;
			int sum=0;
			for(int i=0;i<n;i++)
				{
					cin>>x;
					sum+=x;
					v.push_back(x);
				}
			if(sum%n!=0)
				cout<<-1<<endl;
			else
			{
				avg=sum/n;
				int count=0;
				for(int i=0;i<n;i++)
					if(v[i]<avg)
						count+=(avg-v[i]);
				cout<<count<<endl;
			}
		}
	}

	return 0;
}