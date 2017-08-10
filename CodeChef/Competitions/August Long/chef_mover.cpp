#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for(int test=0;test<t;test++)
	{
		long long n,d,i;
		long long count=0;
		long long val;
		cin>>n;
		cin>>d;
		long long arr[n];
		long long sum=0;
		long long pos=0;
		for ( i = 0; i < n; ++i)
		{
			cin>>arr[i];
			sum=sum+arr[i];
		}
		if(sum%n!=0)
			cout<<-1<<endl;
		else
		{
			val = sum/n;
			for(i=0;i<n-d;i++)
			{
				if(arr[i]!=val && i+d<n)
				{
					count = count + abs(arr[i]-val);
					long long t = arr[i] - val;
					arr[i] = val;
					arr[i+d] = arr[i+d] + t;
				}
			}
			int flag = 0;
			for(i=0;i<n;i++)
			{
				if(arr[i]!=val)
				{
					flag =1 ;
					cout<<-1<<endl;
					break;
				}
			}
			if(flag==0)
				cout<<count<<endl;
		}
		
	}
	return 0;
}
