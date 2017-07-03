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
			
			c = (b/m) - ((a-1)/m);
			System.out.println(c);
			count++;
		}while(count<t);
	}
}
