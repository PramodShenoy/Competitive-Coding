#include <bits/stdc++.h>
using namespace std;
int isOdd(int x)
{
	if(x%2!=0)
		return 1;
	return 0;
}
int main() {
	
	int n;
	cin>>n;
	while(n--)
	{
		int x,y;
		cin>>x>>y;
		if((isOdd(x)==1 && isOdd(y)==0) || (isOdd(x)==0 && isOdd(y)==1))
			cout<<"No Number\n";
		else if(isOdd(x)==1 && isOdd(y)==1)
		{
			if(x==y)
				cout<<(2*x)-1<<endl;
			else if(x-y==2)
				cout<<(2*x)-3<<endl;
			else
				cout<<"No Number\n";
		}
		else if(isOdd(x)==0 && isOdd(y)==0)
		{
			if(x==y)
				cout<<2*x<<endl;
			else if(x-y==2)
				cout<<(2*x)-2<<endl;
			else
				cout<<"No Number\n";
		}
		else
			cout<<"No Number\n";
	}

	return 0;
}