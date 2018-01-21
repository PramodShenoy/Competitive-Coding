import java.util.*;
import java.math.*;
 class small_fact
{
	public static void main(String[] args) {
		int t;
		Scanner sc = new Scanner(System.in);
		t=sc.nextInt();
		for(int j=0;j<t;j++)
		{
			int x;
			x=sc.nextInt();
			BigInteger fact = BigInteger.ONE;
			for(int i=1;i<=x;i++)
				fact = fact.multiply(BigInteger.valueOf(i));
			System.out.println(fact);
		}
	}
}