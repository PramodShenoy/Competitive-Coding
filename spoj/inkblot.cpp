#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string str;
		getline(cin,str);
		int len = str.length();
		std::istringstream buf(str);
    	std::istream_iterator<std::string> beg(buf), end;
    	std::vector<std::string> tokens(beg, end); // done
    	std::vector<int> v;
    	for (std::vector<string>::iterator i = tokens.begin(); i != tokens.end(); ++i)
    	{
    		if ((*i).find("machula") == std::string::npos) 
    		{
    			v.push_back(atoi((*i)));
			}
    	}
    	cout<<v[0]<<"\t"<<v[1];
    }
	return 0;
}