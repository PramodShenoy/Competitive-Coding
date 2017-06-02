#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int with;
	float bal;
	cin>>with>>bal;
	cout<<fixed<<showpoint;
	if(with%5!=0)
	{
		cout<<setprecision(2);
		cout<<bal<<endl;
	}
	else
	{
		cout<<setprecision(2);
		bal=bal-with-0.5;
		cout<<bal<<endl;
	}
	return 0;
}
