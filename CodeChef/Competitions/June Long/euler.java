import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class euler {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);

        BigInteger n = sc.nextBigInteger();
        BigInteger i=BigInteger.ONE;
        BigInteger sum=BigInteger.ZERO;
        BigDecimal prod=new BigDecimal("1.0");
        BigDecimal e = new BigDecimal ("2.7182818");

        while(i.compareTo(n)<=0)
        {
            prod=e.multiply(new BigDecimal(i));
            prod = prod.setScale(0, RoundingMode.FLOOR);
            BigInteger k = prod.toBigInteger();
            sum=sum.add(k);
            i=i.add(BigInteger.ONE);
        }
        System.out.println(sum);

    }

}