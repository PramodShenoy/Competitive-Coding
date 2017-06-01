#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
		
		int t,i,j,n;
		int count=0,fences=0,c=0,flag=0;
		cin>>t;
		do
		{
			cin>>n;
			char land[2][n];
			for (i=0;i<2;i++ ) 
			{
				for (j=0;j<n;j++ ) 
				{
					cin>>land[i][j];
				}
				
			}

			for(i=0;i<2;i++)
			{
				for(j=0;j<n;j++)
				{
					if(land[i][j]=='*'&&i==0)
						c++;
					if(land[i][j]=='*'&&i==1)
						flag=1;
				}
				if(i==0)
					fences=c-1;
				if(flag==1)
					fences++;
			}
			cout<<fences<<"\n";
			fences=0;
			c=0;
			flag=0;
			count++;
		}while(count<t);

		return 0;

}
