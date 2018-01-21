#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	char map[3][11]={{"qwertyuiop"},{"asdfghjkl;"},{"zxcvbnm,./"}};
	char dir;
	cin>>dir;
	char str[100];
	cin>>str;
	int i,j,k=0;
	if(dir=='L')
	{
		for(k=0;k<strlen(str);k++)
		for(i=0;i<3;i++)
		{
			for(j=0;j<11;j++)
			{
				if(map[i][j]==str[k])
					cout<<map[i][j+1];
			}
		}
	}
	else if (dir=='R')
	{
		for(k=0;k<strlen(str);k++)
		for(i=0;i<3;i++)
		{
			for(j=0;j<11;j++)
			{
				if(map[i][j]==str[k])
					cout<<map[i][j-1];
			}
		}
	}

	return 0;
}