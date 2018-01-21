#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll min(ll sptSet[],ll dist[],ll n)
{
	ll m = 999999;
	ll pos = -1;
	for(ll i=0;i<n;i++)
		if(sptSet[i]==0 && dist[i]<m)
			{
				m=dist[i];
				pos = i;
			}
	return pos;
}
int main()
{
	
	ll n,m;
	ll i,j;
	cin>>n>>m;
	ll adj_matrix[n][n];
	ll e1,e2;
	for(i=0;i<m;i++)
	{
		cin>>e1>>e2;
		adj_matrix[e1][e2]=5;
		adj_matrix[e2][e1]=5;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(adj_matrix[i][j]!=5)
				adj_matrix[i][j]=999999;
	}
	ll sptSet[n]={0};
	ll dist[n];
	for( i=1;i<n;i++)
		dist[i]=999999;
	dist[0]=0;
	j=0;
	for(ll count=0;count<n;count++)
	{
		ll vert = min(sptSet,dist,n);
		sptSet[vert]=1;
			sptSet[vert]=1;
			for(i=0;i<n;i++)
			{
				if(adj_matrix[vert][i] && sptSet[i]==0 && dist[vert]!=999999)
				{
					if((dist[vert] + adj_matrix[vert][i])<dist[i])
					{
						dist[i]=dist[vert]+adj_matrix[vert][i];
					}
				}
			}
	}
	for(i=0;i<n;i++)
		{
			if(dist[i]<999999)
				cout<<dist[i]<<" ";
			else 
				cout<<-1<<" ";
		}
}