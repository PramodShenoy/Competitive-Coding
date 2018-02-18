#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
// Let the given dictionary be following
//string dictionary[] = {"GEEKS", "FOR", "QUIZ", "GO","SET","FORT","LOL"};
//int n = sizeof(dictionary)/sizeof(dictionary[0]);
/*
bool checkReached(string &str)
{
	for (int i=0; i<n; i++)
        if (str.compare(dictionary[i]) == 0)
          return true;
    return false;
}*/
void goDeep(int boggle[][100],int m,int n,bool visited[][100],int i,int j,int end)
{
	visited[i][j]=true;
	//str+=boggle[i][j];
	if(boggle[i][j]==end)
		cout<<"Y"<<endl;

	for(int row=i-1;row<=i+1 && row<m;row++)
		for(int col=j-1;col<=j+1 && col<n;col++)
			if(row>=0 && col>=0 && visited[row][col]==false)
				goDeep(boggle,m,n,visited,row,col,end);
	 // Erase current character from string and mark visited
    // of current cell as false
   // str.erase(str.length()-1);
    visited[i][j] = false;
}
void findWords(int boggle[][100],int m,int n,int end)
{
	int i,j;
	bool visited[100][100];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			visited[i][j]=false;
	//string str = "";

	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			goDeep(boggle,m,n,visited,i,j,end);
}
int main(int argc, char const *argv[])
{
	int n,m,end;
	cin>>m>>n;
	int maze[100][100];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			{
				cin>>maze[i][j];
				if(maze[i][j]>1)
					end = maze[i][j];
			}
    findWords(maze,m,n,end);
    return 0;
}