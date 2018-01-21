#include <bits/stdc++.h>
using namespace std;
//n=2 2*2 + 1 + 0 5
//n=3 3*3 + 1 + 4 14
//n=4 4*4 + 9 + 4 + 1 30
int getSquare(int x)
{
	int sum=0;
	for(int i=1;i<=x;i++)
		sum+=i*i;
	return sum;
}
int main() {
	
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		else
			cout<<getSquare(n)<<endl;
	}

	return 0;
}