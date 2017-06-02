import java.io.*;
import java.util.*;

public class hourglass {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int h[][]=new int[6][6];
        int i,j;
        int sum=Integer.MIN_VALUE,max=Integer.MIN_VALUE;
        for (i=0;i<6;i++ ) 
        {
        	for(j=0;j<6;j++)
        		h[i][j]=sc.nextInt();	
        }

        for(i=0;i<4;i++)
        {
        	for(j=1;j<5;j++)
        	{
        		sum=h[i][j-1]+h[i][j]+h[i][j+1]+h[i+1][j]+h[i+2][j-1]+h[i+2][j]+h[i+2][j+1];
        		if(sum>max)
        			max=sum;
        	}
        }
        System.out.println(max);
    }
}