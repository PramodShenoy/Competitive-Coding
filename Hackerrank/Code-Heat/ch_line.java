import java.util.*;

class ch_line
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int x,y;
		int i,j;
		int count=0;
		x=sc.nextInt();
		y=sc.nextInt();
		char grid[][]=new char[x][y];
		for(i=0;i<x;i++)
			for(j=0;j<y;j++)
				grid[i][j]=sc.next().charAt(0);

		for(i=0;i<y;i++)
		{
			for(j=0;j<x-1;j++)
			{
				if(grid[i][j]>grid[i][j+1])
				{
					count++;
					break;
				}
			}
		}
		System.out.println(count);
		
	}
}