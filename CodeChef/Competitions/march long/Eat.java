import java.io.*;
import java.util.*;
import  java.math.*;
class Eat
{
	public static void main(String[] args) {
		int t;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
		while(t-->0)
		{
			int n,h,k=99999,val,time;
			int i,j;
			n=sc.nextInt();
			h=sc.nextInt();
			int piles[] = new int[n];
			for(i=0;i<n;i++)
				piles[i]=sc.nextInt();
			for(i=0;i<n;i++)
			{
				time=0;
				for(j=0;j<n;j++)
				{
					if(piles[j]<=piles[i])
						time++;
					else
						time+=Math.ceil((double)piles[j]/piles[i]);
				}
				//System.out.println(time);
				if(time<=h && piles[i]<=k)
					k=piles[i];
			}
			System.out.println(k);

		}
	}
}