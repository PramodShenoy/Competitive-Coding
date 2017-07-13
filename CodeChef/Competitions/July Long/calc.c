#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t,n,b;
    int count=0;
    scanf("%d",&t);
    do
    {
        scanf("%d",&n);
        scanf("%d",&b);
        long s1=0;
        long s2=0;
        long max=-1;
        while(n>0)
        {
            n=n-1;
            s1=s1+1;
            if(n%b==0)
            {
                s2 =(n/b) * s1;
                if(max<s2)
                     max=s2;
            }
        }
        count++;
        printf("%ld\n",max);
    }while(count<t);
    return 0;
}