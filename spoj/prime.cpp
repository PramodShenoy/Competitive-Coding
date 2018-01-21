#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		if(a<=2)
			cout<<2<<endl;
		int i,j;
		if(a%2==0)
			i=a+1;
		else
			i=a;
		int flag=0;
		if(a==1)
			i=3;
		for(;i<=b;i=i+2)
		{
			for(j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)
					{
						flag=1;
						break;
					}
			}
			if(flag==0)
				cout<<i<<endl;
			flag=0;
		}
		cout<<endl;

	}

	return 0;
}