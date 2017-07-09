import java.io.*;
import java.util.*;

public class tour 
{

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int i,j;
        int n = sc.nextInt();
        int p[] = new int[n];
        int d[] = new int[n];
        for(i=0;i<n;i++)
        	p[i]=sc.nextInt();
        for(i=0;i<n;i++)
        	d[i]=sc.nextInt();
        int start=0;
        int curr_p=0;
        int count=0;
        int flag=0;
        while(start<n)
        {
        	i=start;
        	//start=1
        	while(curr_p>=0)
        	{ 
        		//i=1
        		curr_p=curr_p+p[i]-d[i];
        		if((curr_p+p[(i+1)%n])>=d[(i+1)%n])
        			{
        				i++;
        				flag++;
        				if(i>=n)
        					i=0;
        				if(i==start)
        					break;
        			}
        		else if((curr_p+p[(n-i-1)%n])>=d[(n-i-1)%n])
        		{
        			i--;
        			flag++;
        			if(i<=0)
        				i=n-1;
        			if(i==start)
        				break;

        		}
        		else
        			break;
        	}
        	if(flag==n)
        		count++;
        	curr_p=0;
        	flag=0;
        	start++;
        }
        System.out.println(count);

    }
}