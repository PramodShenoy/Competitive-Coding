#include <stdio.h>

int binary_search(int a[],int n,int sch)
{
	int i,j;
	i=0;
	j=n-1;
	while(i<j)
	{
		int mid=i+(j-i)/2;
		if(a[mid]==sch)
			return mid;
		if((a[mid+1]-sch>=a[mid]-sch))
			return mid;
		if(a[mid]<sch)
			i=mid+1;
		else
			j=mid-1;

	}
	return -1;
}

int main()
{
	//int arr[]={1,3,4,5,7,9,10};
	int arr[]={1,2,4,5};
	int n=sizeof(arr)/sizeof(int);
	printf("%d",arr[binary_search(arr,n,4)]);
	return 0;
}