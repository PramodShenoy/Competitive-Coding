#include <bits/stdc++.h>

using namespace std;
void print_matrix(int area[][300],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<area[i][j]<<" ";
        }
        cout<<endl;
    }
}
void calc_effect(int area[][300],int n,int w,int x,int y)
{
    int i,j,k;
    area[x][y]=w;
    for(k=1;k<=w;k++)
    {
        for(i=x-k;i<=x+k;i++)
        {
            if(i==x-k||i==x+k)
            for(j=y-k;j<=y+k;j++)
            {
                if((i<n && i>=0) && (j<n && j>=0))
                {
                    area[i][j]+=w-k;
                    
                }
            }
            else
                for(j=y-k;j<=y+k;j=j+2*k)
                {
                    if((i<n && i>=0) && (j<n && j>=0))
                {
                    area[i][j]+=w-k;
                    
                }

                }
        }

    }
}

int main() {
    int n;
    int i,j,k;
    int max = -1;
    cin >> n;
    int m;
    cin >> m;
    int area[n][300]={0};
    for(int a0 = 0; a0 <m; a0++)
    {
        int x;
        int y;
        int w;
        cin >> x >> y >> w;
        calc_effect(area,n,w,x,y);
        //print_matrix(area,n);
    }
    //cout<<area[5][5];
    for( i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
            if(area[i][j]>max)
                max=area[i][j];
    }
    cout<<max<<endl;
    return 0;
}
