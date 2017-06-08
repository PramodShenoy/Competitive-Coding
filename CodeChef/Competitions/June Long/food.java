import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class food {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int count=0;
        do
        {
            int n=sc.nextInt();
            int pos=0,i;
            BigInteger val=BigInteger.ZERO;
            BigInteger sum = BigInteger.ZERO;
            BigInteger  a[]=new BigInteger[n];
            for (i=0;i<n;i++)
                a[i]=sc.nextBigInteger();
            Arrays.sort(a);
            for(i=0;i<n;i++)
            {
                if(a[i].compareTo(BigInteger.ZERO)<=0)
                {
                    val=val.add(a[i]);
                }
                else
                {
                    pos=i;
                    for(i=pos;i<n;i++)
                     {
                        sum=sum.add(a[i]);
                        }
                        //BigInteger b= new BigInteger(n-pos);
                    val=val.add((sum.multiply(BigInteger.valueOf(n-pos))));
                    break;
                }
            }
            
            System.out.println(val);
            //System.out.println(Arrays.toString(a));
            count++;
        }while(count<t);
    }
}