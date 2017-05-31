import java.util.*;
class elib
{
	public static void main(String[] args) {


		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		int count=0;
		int i,j;

		do
		{
			int mc=0,ssc=0;
			String str=sc.next();
			int n=(str.length());
			char arr[]=str.toCharArray();
			for(i=0;i<n;i++)
			{
				if(arr[i]=='m')
					mc++;
				else
					ssc++;
			}
			for(i=0;i<n-1;i++)
			{
				if(arr[i]=='m'&&arr[i+1]=='s')
					{
						ssc--;
						i++;
					}
				else if(arr[i]=='s'&&arr[i+1]=='m')
				{
					ssc--;
					i++;
				}
			}
			if(mc>ssc)
				System.out.println("mongooses");
			else if(ssc>mc)
				System.out.println("snakes");
			else
				System.out.println("tie");
			count++;

		}while(count<t);

	}
}
// msmmsmss
//4m 3s