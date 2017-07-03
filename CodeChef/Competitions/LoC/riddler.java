import java.util.*;

class riddler 
{
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int t;
		int a,b;
		int m;
		int count=0;
		int c=0;
		t=sc.nextInt();
		do
		{
			a=sc.nextInt();
			b=sc.nextInt();
			m=sc.nextInt();
			for(int i=a;i<=b;i++)
			{
				if(i%m==0)
					c++;
			}
			System.out.println(c);
			c=0;
			count++;
		}while(count<t);
	}
}