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
        //0 0 1 0 1 0 0 0
        for(int i=0;i<n-1;)
        {   
            if(steps[i+1]==0 && steps[i+2]==1)
                {   
                    jumps++;
                    i++;
                }
            else if(steps[i+1]==1 && steps[i+2]==0)
            {
                jumps++;
                i+=2;
            }
            else if(steps[i+1]==0 && steps[i+2]==0)
            {
                jumps++;
                i+=2;
            }
            else i++;
        }
        System.out.println(jumps);
    }
}