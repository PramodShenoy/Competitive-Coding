#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int week[7];
		int i,n,k,s;
		cin>>n>>k>>s;
		for(i=0;i<7;i++)
			week[i]=k;
		int box=1;
		i=0;
		int choc = n;
		while(1)
		{
			if(choc>=week[i])
			{
				choc=choc-week[i];
				i=(i+1)%7;
				s--;
			}
			if(choc<week[i] && i!=6 && s>0)
				{
					box++;
					choc+=n;
				}
			else if (choc<week[i] && i==6 && s>0)
			{
				cout<<-1<<endl;
				break;
			}
			if(s==0)
			{
				cout<<box<<endl;
				break;
			}
		}
	}
	return 0;
}