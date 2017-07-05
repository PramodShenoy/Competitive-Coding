#include <stdio.h>

void push(int *  stack , int * top,int ele)
{
	stack[++(*top)]=ele;
}
void print(int * stack , int * top)
{
	for(int i=*top; i>=0;i--)
		printf("%d",*(stack+i));
}
int pop(int *  stack , int * top)
{
	return stack[(*top)--];
}
int maxi(int * stack , int * top)
{
	int max =-1;
	for(int i=*top; i>=0;i--)
		if(stack[i]>max)
			max=stack[i];
	return max;
}
int main(int argc, char const *argv[])
{
	int  stack[100000] ;
	int top = -1;
	int q;
	scanf("%d",&q);
	for(int count = 0;count<q;count++)
	{
		int t;
		int ele;
		scanf("%d",&t);
		if(t==1)
			{
				scanf("%d",&ele);
				push(stack,&top,ele);
			}
		else if(t==2)
			pop(stack,&top);
		else if(t==3)
			printf("%d\n",maxi(stack,&top));
	}
	return 0;
}