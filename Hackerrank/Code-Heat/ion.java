import java.io.*;
import java.util.*;

class ion {

    public static void main(String[] args) 
    {
        Scanner sc =  new Scanner(System.in);
        int q = sc.nextInt();
        int m = sc.nextInt();
        int marr[] = new int[m];
        for(int i=0;i<m;i++)
        	marr[i]=sc.nextInt();
        int data=q;
        for (int i=0;i<m;i++) 
        {
        	data+= (q-marr[i]);
        }
        System.out.println(data);


    }
}
