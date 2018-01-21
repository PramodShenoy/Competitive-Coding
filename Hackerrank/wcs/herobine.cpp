#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		long long x;
		cin>>x;
		long long map[]={100,50,10,5,2,1};
		long long time=0;
		for(int i=0;i<6;i++)
		{
			if(map[i]<=x)
			{
				time+=x/map[i];
				x=x%map[i];
			}
		}
		cout<<time<<endl;
	}
	return 0;
}