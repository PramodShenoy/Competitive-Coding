
//imports for BufferedReader
import java.io.BufferedReader;
import java.io.InputStreamReader;

//import for Scanner and other utility  classes
import java.util.*;
import java.math.*;

class ascii {
    static int checkPrime(int n)
    {
        int flag=0;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {flag=0; break;}
            else flag=1;
        }
        return flag;
    }
    static int nearestPrime(int n)
    {
        int diff=10;
        int min=2;
        for(int i=n-10;i<n+10;i++)
        {
            int res=checkPrime(i);
            if(res==1 && Math.abs(n-i)<diff)
            {
                diff=Math.abs(n-i);
                min=i;
            }
        }
        return min;
    }
    public static void main(String args[] ) throws Exception {
        Scanner sc= new Scanner(System.in);
        int t,l;
        String str1;
        t=sc.nextInt();
        l=sc.nextInt();
        str1=sc.next();
        char arr[]=str1.toCharArray();
        int count=0;
        do
        {
            for(int i=0;i<l;i++)
            {
                int res=(int)arr[i];
                if (checkPrime(res)==0)
                {
                    res=nearestPrime(res);
                    arr[i]=(char)res;
                }
                else
                {
                    arr[i]=(char)res;
                }
            }
            count++;
        }while(count<t);
        
        str1=String.valueOf(arr);
        System.out.println(str1);
        
        
    }
}
