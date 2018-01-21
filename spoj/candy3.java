import java.util.*;
import java.math.*;
class candy3
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0)
		{
			BigInteger n,x;
			BigInteger sum = BigInteger.ZERO;
			n=sc.nextBigInteger();
			for(BigInteger i = BigInteger.ZERO;i.compareTo(n)<0;)
			{
				x=sc.nextBigInteger();
				sum = sum.add(x);
				i=i.add(BigInteger.ONE);
			}
			BigInteger rem = sum.mod(n);
			if(rem.compareTo(BigInteger.ZERO)==0)
				System.out.println("YES");
			else
				System.out.println("NO");
		}
	}
}