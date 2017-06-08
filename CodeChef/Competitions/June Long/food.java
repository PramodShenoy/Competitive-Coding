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
            //System.out.println(Arrays.toString(a));
            if(a[n-1].compareTo(BigInteger.valueOf(0))<=0)
            {
                for(i=0;i<n;i++)
            {
                if(a[i].compareTo(BigInteger.valueOf(0))<=0)
                {
                    val=val.add(a[i]);
                }
            }
        }
            else
            {
                for(i=n-1;i>=0;i--)
                    if(a[i].compareTo(BigInteger.valueOf(0))<=0)
                    {
                        pos=i;
                        break;
                    }
                BigInteger temp=BigInteger.ZERO;
                for(i=n-1;i>pos;i--)
                {
                    sum=sum.add(a[i]);
                }
                val=val.add((sum.multiply(BigInteger.valueOf(n-1-pos))));
                for(i=pos;i>=0;i--)
                {
                    sum=sum.add(a[i]);
                    temp=sum.multiply(BigInteger.valueOf(n-i));
                    if(temp.compareTo(val)>=0)
                        val=temp;
                    else
                        pos=i;
                }
                for(i=pos;i>=0;i--)
                {
                    val=val.add(a[i]);
                }

            }

            System.out.println(val);
            count++;
        }while(count<t);
    }
}