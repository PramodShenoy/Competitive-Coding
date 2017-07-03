import java.util.*;

class chara
{
	public static String op1(String str)
	{
		char arr[] = str.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]=='c')
				arr[i]='a';
			else if(arr[i]=='a')
				arr[i]='c';
		}
		str = String.valueOf(arr);
		return str;
	}

	public static String op2(String str)
	{
		return new StringBuilder(str).reverse().toString();
	}
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int count = 0;
		String s="";
		for(int i=0;i<100000;i++)
		{
			s=s+"a"+op1(op2(s));
		}
		for(int j=0;j<t;j++)
		{
			int k = sc.nextInt();
			System.out.println(s.toCharArray()[k-1]);
		}
	}
}