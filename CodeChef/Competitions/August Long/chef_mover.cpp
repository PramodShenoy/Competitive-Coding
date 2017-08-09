#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for(int test=0;test<t;test++)
	{
		int n,d,i;
		int count=0;
		int val;
		cin>>n;
		cin>>d;
		int arr[n];
		int sum=0;
		int max=-1;
		int pos=0;
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
				if(arr[i]!=val)
				{
					count = count + abs(arr[i]-val);
					int c = arr[i]-val;
					arr[i] = val;
					arr[i+d] = arr[i+d] + c;
				}
			}
			cout<<count<<endl;
		}
		
	}
	return 0;
}
