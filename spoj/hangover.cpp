#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	double t;
	while(cin>>t)
	{
		if(t==0.00)
			break;
		else
		{
			double sum=0.0;
			int res=0;
			for(int i=2;i<=500;i++)
			{
				sum=sum+(1.0/i);
				if(sum>=t)
					{
						res=i-1;
						break;
					}
			}
			cout<<res<<" card(s)"<<endl;

		}
	}
	return 0;
}