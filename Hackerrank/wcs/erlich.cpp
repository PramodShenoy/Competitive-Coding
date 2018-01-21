#include <bits/stdc++.h>
using namespace std;
#define ll long long
int s[10001];
void sieveOfEratosthenes(int N)
{
    vector <bool> prime(N+1, false);
    for (int i=2; i<=N; i+=2)
        s[i] = 2;
     for (int i=3; i<=N; i+=2)
    {
        if (prime[i] == false)
        {
            s[i] = i;
 
            for (int j=i; j*i<=N; j+=2)
            {
                if (prime[i*j] == false)
                {
                    prime[i*j] = true;
                     s[i*j] = i;
                }
            }
        }
    }
}
 
void generatePrimeFactors(int N,std::vector<int>&v)
{
 
 
    //printf("Factor\n");
 
    int curr = s[N];  
    int cnt = 1; 
 
    while (N > 1)
    {
        N /= s[N];
        if (curr == s[N])
        {
            cnt++;
            continue;
        }
 
        //printf("%d\n", curr);
        v.push_back(curr);
        curr = s[N];
        cnt = 1;
    }
}
 
int main()
{
    int n;
    int i,j,k;
    cin>>n;
    sieveOfEratosthenes(10000);
    std::vector<int> sp;
    for( i=2;i<=n;i++)
    {
        std::vector<int> v;
        generatePrimeFactors(i,v);
        ll prod=1;
        for( j=0;j<v.size() && v.size()>=3;j++)
            prod*=v[j];
        if(prod==i)
           {
                for( k=0;k<v.size();k++)
                {
                    if((i-1)%(v[k]-1)!=0)
                        break;
                }
                if(k==v.size())
                    sp.push_back(i);
           } 
    }
    ll res=0;
    ll maxi=-1;
   for ( i=0; i<sp.size(); i++)
    {
        ll curr_xor = 0; // to store xor of current subarray
 
        // Pick ending points of subarrays starting with i
        for ( j=i; j<sp.size(); j++)
        {
            curr_xor = curr_xor ^ sp[j];
            maxi = max(maxi, curr_xor);
        }
    }
    cout<<maxi<<endl;
    return 0;
}