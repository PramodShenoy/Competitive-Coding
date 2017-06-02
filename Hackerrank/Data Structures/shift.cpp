#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printarr(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

int main() {
    int n,d,i;
    cin>>n>>d;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    int t;
    do
    {
    t=arr[0];
   	for(i=0;i<n-1;i++)
   		arr[i]=arr[i+1];
   	arr[n-1]=t;
   	d--;
   }while(d!=0);        
    printarr(arr,n);


    return 0;
}
