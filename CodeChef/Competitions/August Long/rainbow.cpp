#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for(int test =0;test<t;test++)
	{
		int n;
		int i,j;
		cin>>n;
		int count=0;
		int arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		for(i=0,j=n-1;i<=j;i++,j--)
			if(arr[i]==arr[j] && (arr[i]==1||arr[i]==2||arr[i]==3||arr[i]==4||arr[i]==5||arr[i]==6||arr[i]==7))
				count++;

		int res = ceil((n/2.0));
		//cout<<res;
		if(count==res)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}
