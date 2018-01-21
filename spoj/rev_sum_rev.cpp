#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	while(n--)
	{
		string sx,sy;
		cin>>sx>>sy;
		reverse(sx.begin(),sx.end());
		reverse(sy.begin(),sy.end());
		int x = stoi(sx);
		int y = stoi(sy);
		int sum = x+y;
		string final = to_string(sum);
		reverse(final.begin(),final.end());
		int i = 0;
   		while (final[i] == '0')
       		i++;
   		final.erase(0, i);
   		cout<<final<<endl;
	}

	return 0;
}