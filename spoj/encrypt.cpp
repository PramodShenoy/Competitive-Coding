#include <bits/stdc++.h>
using namespace std;
//toioynnkpheleaigshareconhtomesnlewx
//theresnoplacelikehomeonasnowynightx
int main() {
	
	int t;
	while(cin>>t)
	{
		if(t==0)
			break;
		else
		{
			char str[200];
			cin>>str;
			int len = strlen(str);
			int row = len/t;
			char mat[row][t];
			int dir=0;
			int i,j,k=0;
			for(i=0;i<row;i++)
			{
				if(dir==0)
				{
					for(j=0;j<t;j++)
						mat[i][j]=str[k++];
					dir=1;
				}
				else if(dir==1)
				{
					for(j=t-1;j>=0;j--)
						mat[i][j]=str[k++];
					dir=0;
				}
			}
			/*
			for(i=0;i<row;i++)
			{
				for(j=0;j<t;j++)
					cout<<mat[i][j];
				cout<<"\n";
			}*/
			for(i=0;i<t;i++)
			{
				for(j=0;j<row;j++)
					cout<<mat[j][i];
			}
			cout<<"\n";

		}
	}

	return 0;
}