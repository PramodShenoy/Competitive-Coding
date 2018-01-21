#include <bits/stdc++.h>
using namespace std;
//((a+b)*(z+x))
//ab+zx+*
int main() {
	
	int n;
	cin>>n;
	while(n--)
	{
		char expr[400];
		cin>>expr;
		int top=-1;
		char stack[400];
		char res[400];
		int i,j,k;
		j=0;
		k=0;
		unordered_map<char,int>map;
		map['+']=1;
		map['-']=2;
		map['*']=3;
		map['/']=4;
		map['^']=5;
		for(i=0;i<strlen(expr);i++)
		{
			char ch=expr[i];
			if(ch>='a'&&ch<='z')
				res[k++]=ch;
			else if(ch=='(')
				stack[++top]=ch;
				else if(ch==')')
				{
					while(stack[top]!='(' || top!=-1)
					{
						char p =stack[top--];
						if(p=='(')
							break;
						res[k++]=p;	
					}
				}
				else
				{
				while(top!=-1 && map[ch]<=map[stack[top]])
					res[k++]=stack[top--];
				stack[++top]=ch;
			}
		}
		if(top!=-1)
		{
			while(top!=-1)
			res[k++]=stack[top--];
		}
		res[k]='\0';
		for(i=0;i<=k;i++)
			cout<<res[i];
		cout<<endl;

	}

	return 0;
}