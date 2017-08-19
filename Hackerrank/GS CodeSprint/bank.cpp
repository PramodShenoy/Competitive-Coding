#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for (int test = 0; test < t;test++)
	{
		int n;
		float k,x,d;
		int i;
		cin>>n>>k>>x>>d;
		int p[n];
		for (i = 0; i < n; ++i)
			cin>>p[i];
		float sum=0.0;
		for(i=0;i<n;i++)
		{
			sum+=fmax((float)k,0.01*x*p[i]);
		}
		if(sum>d)
			cout<<"upfront"<<endl;
		else
			cout<<"fee"<<endl;
	}
	return 0;
}
