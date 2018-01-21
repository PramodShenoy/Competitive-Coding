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
int main(int argc, char const *argv[])
{
	
	return 0;
}