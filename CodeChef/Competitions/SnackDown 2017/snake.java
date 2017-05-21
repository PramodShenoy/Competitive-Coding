import java.util.*;

class snake
{

	public static int[] countsort(int [] a)
	{
		int n=a.length;
		//System.out.println("size of array in function:"+n);
		int count[]=new int[n];
		int i,j;
		for (i=0;i<n;i++) 
			count[i]=0;
		for (i=0;i<=n-2 ;i++ ) 
		{
			for(j=i+1;j<=n-1;j++)
			{
				if(a[i]<a[j])
					count[j]=count[j]+1;
				else
					count[i]=count[i]+1;
			}
		}
		return count;
		
	}
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		int t,n,q,k,snake=0;
		int i;
		t=sc.nextInt();
		int count=0;
		do
		{
			n=sc.nextInt();
			q=sc.nextInt();
			int l[]=new int[n];
			for(i=0;i<n;i++)
				l[i]=sc.nextInt();
			Arrays.sort(l);
			for(int j=0;j<q;j++)
			{	
				int pos=0;
				snake=0;
				k=sc.nextInt();
				for(int in=n-1; in>=0 ;in--)
				{
					if(l[in]>=k)
						snake++;
					else
					{
						pos=in;
						break;
					}
				}
				//System.out.println(pos);
				int left[]=new int[pos+1];
				for(int in=0;in<=pos;in++)
					left[in]=l[in];
				//System.out.println(left[0]+" "+left[1]+" "+left[2]);
				int[] c=countsort(left);
				//System.out.println(c[0]+" "+c[1]+" "+c[2]);
				int diff[]=new int[pos+1];
				for(int in=0;in<=pos;in++)
					diff[in]=k-l[in];
				//System.out.println(diff[0]+" "+diff[1]+" "+diff[2]);
				//System.out.println("not left snakes"+snake);

				for(int in=0;in<=pos;in++)
				{
					if(c[in]>=diff[in])
						snake++;
				}
				System.out.println(snake);
			}	
			count++;
		}while(count<t);
		
	}
}