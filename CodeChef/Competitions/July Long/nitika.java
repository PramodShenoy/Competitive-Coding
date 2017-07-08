import java.util.*;
import java.io.*;

class nitika
{
	public static void main(String[] args) throws IOException
	{

		Scanner sc =new Scanner(System.in);
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int t = sc.nextInt();
		int count=0;
		do
		{
			String str = br.readLine();
			//String str = "sdfsd dfsdf dsakl wqwqerwef";
			//System.out.println(str);
			str = str.toLowerCase();
			String[] a = str.split("\\s+");
			int words = a.length;
			//System.out.println(words);
			int n = (3*(words-1))+(a[words-1].length());
			//System.out.println(n);
			char arr[] =  new char[n];
			int j=0;
			for(int i=0;i<(3*(words-1));i++)
			{
				arr[i]=Character.toUpperCase(a[j].toCharArray()[0]);
				arr[++i] = '.';
				arr[++i] = ' ';
				j++;
			}
			String arr2 = String.valueOf(arr);
			arr2 = arr2 + Character.toUpperCase(a[words-1].toCharArray()[0])+a[words-1].substring(1);
			System.out.println(arr2);
			count++;
		}while(count<t);
	}
}