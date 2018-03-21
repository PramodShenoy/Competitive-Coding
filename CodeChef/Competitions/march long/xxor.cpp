    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main(int argc, char const *argv[])
    {
    	int i,j,n,q;
    	cin>>n>>q;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin>>arr[i];
      	int table[100000][31]={0};
      	for(i=0;i<n;i++)
      	{
      		for(j=0;j<31;j++)
      			{
      				if(i==0)
      					table[i][j]=(arr[i]>>j)&0x1;
      				else
      					table[i][j]=table[i-1][j]+((arr[i]>>j)&0x1);
      			}
      	}
       	while(q--)
    	{
    		int bin[33];
			std::fill_n(bin, 33, 1);    		
			int k=0,bk=0;
    		int zero,one;
    		int left,right;
    		cin>>left>>right;
    		for(i=0;i<31;i++)
    		{
    			zero=0,one=0;
    			if(left==1)
    			{
    				one = table[right-1][i];
    				zero = right-left+1-one;
    			}
    			else
    			{
    				one = table[right-1][i]-table[left-2][i];
    				zero = right-left+1-one;
    			}
    			//cout<<zero<<" "<<one<<endl;
    			if(one>=zero)
    				bin[bk++]=0;
    			else
    				bin[bk++]=1;
    		}
    		long x=0;
    		for(i=0;i<31;i++)
    		{
    			//cout<<bin[i];
    			x=x+(bin[i]*pow(2,i));
    		}
    		cout<<x<<endl;
    	}
    	return 0;
    } 