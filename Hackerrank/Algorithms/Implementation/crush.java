import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class crush {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int n,m,i,j;
        int a,b,k;
        n=sc.nextInt();
        m=sc.nextInt();
        int arr[]=new int[n];

        for(i=0;i<m;i++)
        {
        	a=sc.nextInt();
        	b=sc.nextInt();
        	k=sc.nextInt();
        	for(j=a-1;j<b;j++)
        	{
        		arr[j]=arr[j]+k;
        	}
        }
        int max=-1;
        for(j=0;j<n;j++)
        	if(arr[j]>max)
        		max=arr[j];
        System.out.println(max);
    }
}