#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	std::map<int, int> m;
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int i,j;
		i=j=1;
		m.insert(pair<int,int>(a,i++));
		if(m.count(b)>0)
			m[b]++;
		else
			m.insert(pair<int,int>(b,j++));
		if(m.count(c)>0)
			m[c]++;
		else
			m.insert(pair<int,int>(c,j++));
		if(m.count(d)>0)
			m[d]++;
		else
			m.insert(pair<int,int>(d,j++));

		/*for(auto itr=m.begin();itr!=m.end();itr++)
		{
			cout<<itr->first<<" "<<itr->second<<endl;
		}*/
		if(m[a]==2 && m[b]==2 && m[c]==2 && m[d]==2 || (m[a]==4 && m[b]==4 && m[c]==4 && m[d]==4))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		m.clear();
	}
	return 0;
}