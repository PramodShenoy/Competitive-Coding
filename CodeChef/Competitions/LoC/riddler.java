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
			//recalculating limits
			if(a>m && a%m!=0)
			{
				int res = Math.round(a/m);
				a = (res) * m;
			}
			else if(a<=m)
				a=m;
			if(b%m!=0)
			{
				int res2 = Math.round(b/m);
				b = (res2) * m;
			}
			c=(b-a)/m;
			System.out.println(c+1);
			c=0;
			count++;
		}while(count<t);
	}
}