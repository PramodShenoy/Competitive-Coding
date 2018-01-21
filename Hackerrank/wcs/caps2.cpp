#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
	long long n,q;
    ll maxi=-1;
	cin>>n>>q;
	map<int,int>m;
    ll id1,id2;
	while(q--)
	{
		ll i,j,k;
		cin>>i>>j>>k;
		for(ll index = i;index<=j;index++)
		{
			if(m.count(index)<0)
				m.insert(pair<int,int>(index,k));
			else
				m[index]+=k;
            if(m[index]>maxi)
            {
                maxi=m[index];
                id1=index;
            }
		}
	}
    for(auto it2=m.find(id1);it2!=m.end();it2++)
	{
		if(it2->second == maxi)
            id2=it2->first;
        else
        	break;
	}
	cout<<maxi<<endl;
	cout<<(id2-id1+1)<<endl;
    for(int r=id1;r<=id2;r++)
        cout<<r<<" ";
		return 0;
}