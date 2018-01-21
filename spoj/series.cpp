#include <bits/stdc++.h>
using namespace std;
int main() {
	
	int a,b,c;
	while(cin>>a>>b>>c)
	{
		if(a==b && b==c && a==0)
			break;
		if(2*b==(a+c))
		{
			cout<<"AP "<<c+(b-a)<<endl;
		}
		if(b*b==(a*c))
		{
			cout<<"GP "<<c*(b/a)<<endl;
		}

	}

	return 0;
}