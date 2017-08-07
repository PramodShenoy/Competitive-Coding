#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for(int test=0;test<t;test++)
	{
		int n,d,i;
		cin>>n;
		cin>>d;
		int arr[n];
		for ( i = 0; i < n; ++i)
			cin>>arr[i];
		int count=0;
		int avg;
		for( i=0;i<n-d;i++)
		{
			if(arr[i]!=arr[i+d])
			{
				int v1 = ceil((arr[i]+arr[i+d])/2.0);
				int v2 = floor((arr[i]+arr[i+d])/2.0);
				if(arr[i+d]>=arr[i])
				{
					count = count + (v2-arr[i]);
					arr[i+d]=v1;
					arr[i] =v2;
					
				}
				else
				{
					count = count + (v1-arr[i+d]);
					arr[i] = v1;
					arr[i+d] = v2;
				}
			}
		}
		int flag=0;
		for(i=0;i<n-1;i++)
		{
			if(arr[i]==arr[i+1])
				flag=0;
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==1 && count==0)
			cout<<-1<<endl;
		else if(flag==0 && count>0)
			cout<<count<<endl;

	}
	return 0;
}