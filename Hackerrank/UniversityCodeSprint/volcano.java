import java.util.*;
import java.io.*;

public class volcano
{
	public static void print_matrix(int area[][],int n)
	{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //cout<<area[i][j]<<" ";
            System.out.print(area[i][j]+" ");
        }
        //cout<<endl;
        System.out.println();
    }
	}
	public static void calc_effect(int area[][],int n,int w,int x,int y)
	{
    area[x][y]=w;
    //cout<<"sdfdsf"<<endl;
    area[0][0]=1111;
    System.out.println("sdfsd"+area[0][1]);
    int i,j,k;
    for(k=1;k<=w;k++)
    {
        for(i=x-k;i<=x+k;i++)
        {
            for(j=y-k;j<=y+k;j++)
            {
                if(i==x && j==y)
                    continue;
                if((i<n && i>=0) && (j<n && j>=0))
                {
                    //cout<<i<<" "<<j<<endl;
                    area[i][j]=w-k;
                }
            }
        }
    }
	}

	public static void main(String[] args) 
	{
		 Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int area[][] = new int[n][n];
        for(int a0 = 0; a0 < m; a0++){
            int x = in.nextInt();
            int y = in.nextInt();
            int w = in.nextInt();
            calc_effect(area,n,w,x,y);
            print_matrix(area,n);
        }
	}

}