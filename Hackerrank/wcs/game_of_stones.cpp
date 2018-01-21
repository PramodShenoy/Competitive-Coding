#include <bits/stdc++.h>
using namespace std;
int  main(int argc, char const *argv[])
{
	long long n;
	cin>>n;
	long long arr[n];
	long long sum,m=-1;
	long long i,j;
	for(i=0;i<n;i++)
		cin>>arr[i];
	sum=arr[0];
	for(i=2;i<=(n/2);i++)
	{
		sum=arr[0];
		if(n%i==0)
		{
			long long x = i;//3
			long long y = n/i;//3
			long long j;
			long long id1,id2;
			id1=id2=0;
			for(j=x+1;j<n;j=j+x+1)
			{
				id1++;
				id2++;
				if(id1<x && id2<y)
					sum+=arr[j];
				else
					break;
			}
		}
		if(m<sum)
				m=sum;
	}
	if(m<=0)
		cout<<0<<endl;
	else
		cout<<m<<endl;
	return 0;
}