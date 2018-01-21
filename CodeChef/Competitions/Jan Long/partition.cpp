    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main(int argc, char const *argv[])
    {
    	ll t;
    	cin>>t;
    	while(t--)
    	{
    		ll skip,n,i,sum=0;
    		cin>>skip>>n;
    		ll arr[1000009];
    		for(i=1;i<=n;i++)
    			{
    				arr[i]=i;
    				sum=sum+arr[i];
    			}
    		arr[skip]=-1;
    		sum=(sum-skip);
    		if(sum%2!=0)
    			cout<<"impossible"<<endl;
    		else
    		{
    			sum=sum/2;
    			ll temp=sum;
    			std::map<int, int> m1;
    			std::map<int, int> m2;
    			for(i=n;i>0;i--)
    			{
    				if(arr[i]!=-1 && temp>=arr[i] && ((temp-arr[i])!=skip))
    				{
    					m1.insert(pair<int,int>(arr[i],0));
    					temp-=arr[i];
    				}
    			}
    			temp = sum;
    			for(i=1;i<=n;i++)
    			{
    				if(m1.find(arr[i])==m1.end() && arr[i]!=-1 && temp>=arr[i])
    					{
    						m2.insert(pair<int,int>(arr[i],1));
    						temp=temp-arr[i];
    					}
    			}
    			if(m1.size()>=1&&m2.size()>=1 && ((m1.size()+m2.size())==n-1))
    			{
    				for(i=1;i<=n;i++)
    				{
    					if(arr[i]==-1)
    						cout<<2;
    					if(m1.count(arr[i])>0)
    						cout<<m1[arr[i]];
    					else if(m2.count(arr[i])>0)
    						cout<<m2[arr[i]];
    				}
    			cout<<endl;
    			}
    			else
    				cout<<"impossible"<<endl;
    			m1.clear();
    			m2.clear();
    		}
    	}
    	return 0;
    } 