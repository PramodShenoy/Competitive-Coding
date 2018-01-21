#include <iostream>
#include <math.h>
using namespace std;
int mod(string num, int a)
{
    int res = 0;
 
    for (int i = 0; i < num.length(); i++)
         res = (res*10 + (int)num[i] - '0') %a;
    return res;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string b;
		int a;
		cin>>a>>b;
		if(b=="0")
			cout<<1<<endl;
		if(a==0)
			cout<<0<<endl;
		else
		{
			int m = mod(b,4);
			int exp;
			if(m==0)
				exp=4;
			else
				exp=mod(b,4);
			int ld=((int)pow(a,exp))%10;
			cout<<ld<<endl;
		}
	}
	return 0;
}