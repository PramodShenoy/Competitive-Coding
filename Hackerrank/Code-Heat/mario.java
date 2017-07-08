import java.io.*;
import java.util.*;

class mario {

    public static void main(String[] args) 
    {
        Scanner sc =  new Scanner(System.in);
        int n = sc.nextInt();
        int steps[] = new int[n];
        for(int i=0;i<n;i++)
            steps[i]=sc.nextInt();
        int jumps=0;
        //0 1 0 1 0 1 0 0 n=8
        //0 1 0 1 0 1 0 n=7
        //0 0 1 0 1 0 0 n=7
        for(int i=0;i<n-1;)
        {   
           
            if(i+2!=n && steps[i+2] ==0 )
            {
                i+=2;
                jumps++;
            }
            else if(steps[i+1] == 0 && (i+2 == n || steps[i+2]==1 ))
            {
                i++;
                jumps++;
            }
        }
        System.out.println(jumps);
    }
}
