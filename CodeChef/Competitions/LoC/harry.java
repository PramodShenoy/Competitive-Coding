import java.util.*;

class harry 
{
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		int count=0;
		do
		{
			int n = sc.nextInt();
			int s = sc.nextInt();
			int arr[]=new int[n];
			for (int i=0;i<n;i++) 
			{
				arr[i]=sc.nextInt();
			}
			Arrays.sort(arr);
			int res =-1;
			for(int i=0;i<n;i++)
			{
				if((arr[i]*(n-i))==s)
				{
					res = arr[i];
					break;
				}
			}
			System.out.println(res);
			count++;
		}while(count<t);
	}
}