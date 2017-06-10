import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class clone {
	public static String check(int a[],int b[])
	{
		int i,j;
		int c=0;
		for(i=0,j=0;i<a.length&&j<b.length;i++,j++)
		{
			if(a[i]!=b[j])
				c++;
		}
		if(c<=1)
			return "YES";
		else
			return "NO";

	}

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int count=0;
        do
        {
        	int n,q;
        	int i,j,k,l;
        	n=sc.nextInt();
        	q=sc.nextInt();
        	int a[]=new int[n];
        	for(i=0;i<n;i++)
        		a[i]=sc.nextInt();
        	int qa[]=new int[4];
        	for(i=0;i<q;i++)
        	{
        		for(j=0;j<4;j++)
        			qa[j]=sc.nextInt();

        		int b[]=new int[qa[1]-qa[0]+1];
        		for(k=0,j=qa[0]-1;k<b.length && j<qa[1];k++,j++)
        		{
        			b[k]=a[j];
        		}
        		Arrays.sort(b);

        		int c[]= new int[qa[3]-qa[2]+1];
        		for(k=0,j=qa[2]-1;k<c.length && j<qa[3];k++,j++)
        		{
        			c[k]=a[j];
        		}
        		Arrays.sort(c);
        		String res = check(b,c);
        		System.out.println(res);
        	}

        	count++;
        }while(count<t);


    }

}