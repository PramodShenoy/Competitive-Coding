import java.util.*;
class codechef
{

	public static String check(int a[],int n)
	{
		int flag=0;
		int i;
		if(n%2==0)
			return "no";
		else if(a[0]!=1&& a[n-1]!=1)
			return "no";
		else
		{
			int mid_pos=(n-1)/2;
			int mid_item=a[mid_pos];

			for(i=0;i<mid_pos;i++)
			{
				if(a[i+1]-a[i]!=1)
					return "no";
				else
					flag++;
			}
			if(flag==mid_pos)
			{
				for(i=mid_pos;i<n-1;i++)
			{
				if(a[i]-a[i+1]!=1)
					return "no";
				else
					flag++;
			}
			if(flag==n-1)
				return "yes";
			else
				return "no";
			}
			else
				return "no";
		}
	}


	public static void main(String[] args) {

		Scanner sc= new Scanner(System.in);
		int s,n;
		s=sc.nextInt();
		int count=0;
		do
		{
			n=sc.nextInt();
			int h[]=new int[n];
			for (int i=0;i<n ;i++ ) 
			{
				h[i]=sc.nextInt();
			}

			String res=check(h,n);
			System.out.println(res);
			count++;
	}while(count<s);
	}
}
