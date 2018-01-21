#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long x,y,k;
        map<int,int> row;
        map<int,int> col;
        int r,c;
        r=0,c=0;
        while(n--)
        {
            cin>>x>>y>>k;
            if(row.count(x)>0)
                row[x]++;
            else
                row.insert(pair<int,int>(x,r++));
            if(col.count(y)>0)
                col[y]++;
            else
                col.insert(pair<int,int>(y,c++));
        }
        int mini = min(row.size(),col.size());
        cout<<mini<<endl;
    }
    return 0;
}
