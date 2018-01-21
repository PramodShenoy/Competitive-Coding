import java.util.*;
import java.math.*;
class julka
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t=10;
		while(t-->0)
		{
			BigInteger total,klaudia,natalia,kmore;
			total=sc.nextBigInteger();
			kmore=sc.nextBigInteger();
			BigInteger temp=total.add(kmore);
			klaudia=temp.divide(new BigInteger("2"));
			natalia=total.subtract(klaudia);
			System.out.println(klaudia);
			System.out.println(natalia);
		}
	}
}