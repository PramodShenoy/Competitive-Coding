#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,n,k,ind=-1;
    cin>>n>>k;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
        if(val==k)
            ind=i;
    }
    if(ind!=-1)
    for(i=0;i<n;i++)
    {
        if(i==ind)
            cout<<1<<" ";
        else
            cout<<0<<" ";
    }
    else
        cout<<-1<<endl;
    return 0;
}
