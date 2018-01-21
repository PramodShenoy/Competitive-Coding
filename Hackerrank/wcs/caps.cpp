#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	unsigned long long n,q;
	cin>>n>>q;
	unsigned long long stack[n+1]={0};
	while(q--)
	{
		unsigned long long i,j,k;
		cin>>i>>j>>k;
		for(long long index=i-1;index<j;index++)
			stack[index]+=k;
	}
	unsigned long long m=0;
	unsigned long long id1,id2;
	id1=id2=0;
	unsigned long long index2;
	for(index2=0;index2<n;index2++)
	{
		if(stack[index2]>m)
			{
				m=stack[index2];
				id1=index2;
			}
	}
	index2=id1;
	while(stack[index2]==m)
	{
		id2=index2;
		index2++;
	}
	//cout<<id1<<" "<<id2;
	cout<<m<<endl;
	cout<<(id2-id1+1)<<endl;
	for(unsigned long long r=id1;r<=id2;r++)
		cout<<r+1<<" ";
	//cout<<endl;
	return 0;
}