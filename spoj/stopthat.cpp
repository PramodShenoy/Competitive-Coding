#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
	long long n;
	cin>>n;
	if(n<=1)
		cout<<"TAK\n";
	else
	{
		/*double res = ((double)log(n))/log(2);
		if((res-(long long)res)==0)
			cout<<"TAK\n";
		else
			cout<<"NIE\n";*/
		int flag=0;
		while(n>1)
		{
			if(n%2==0)
				n=n/2;
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<"TAK\n";
		else
			cout<<"NIE\n";
	}
	return 0;
}