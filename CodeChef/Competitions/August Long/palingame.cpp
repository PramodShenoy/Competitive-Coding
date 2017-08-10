#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for(int test = 0;test<t;test++)
	{
		char s[500];
		char t[500];
		cin>>s;
		cin>>t;
		int n_s = strlen(s);
		int n_t = strlen(t);
		//cout<<n_t<<" "<<n_s;
		if(n_t==1)
			cout<<"B"<<endl;
		else
		{
			if(s[0]==t[0])
				cout<<"B"<<endl;
			else
				cout<<"A"<<endl;
		}
	}
	return 0;
}