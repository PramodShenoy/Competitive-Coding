import java.util.*;
class elib2
{
	public static void main(String[] args) {


		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		int i,j,n;
		int count=0,fences=0,c=0,flag=0;
		do
		{
			n = sc.nextInt();
			char land[][]=new char[2][n];
			for (i=0;i<2 ;i++ ) 
			{
				for (j=0;j<n ;j++ ) 
				{
					land[i][j]=sc.next().charAt(0);
				}
				
			}

			for(i=0;i<2;i++)
			{
				for(j=0;j<n;j++)
				{
					if(land[i][j]=='*'&&i==0)
						c++;
					if(land[i][j]=='*'&&i==1)
						flag=1;
				}
				if(i==0)
					fences=c-1;
				if(flag==1)
					fences++;
			}
			System.out.println(fences);
			fences=0;
			c=0;
			flag=0;
			count++;
		}while(count<t);

	}
}
