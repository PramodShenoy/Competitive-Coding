import java.util.*;

class riddler 
{
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int t;
		int  a,b;
		int  m;
		int count=0;
		int c=0;
		t=sc.nextInt();
		do
		{
			a=sc.nextInt();
			b=sc.nextInt();
			m=sc.nextInt();
			//recalculating limits
			//a=2 b=6 m=2
			c =(int) Math.floor((b-a+1)/m);
			int k = (b-a+1) % m;//k = 1
			for(int i=a;i<=(k+a-1);i++)
			{
				if(i%m==0)
					c++;
			}
			System.out.println(c);
			count++;
		}while(count<t);
	}
}
