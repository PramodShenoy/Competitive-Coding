    import java.util.*;
     
    class calc
    {
    	public static void main(String[] args) 
    	{
    		Scanner sc = new Scanner(System.in);
    		int t=sc.nextInt();
    		for(int z=0;z<t;z++)
    		{
    			long n = sc.nextInt();
    			long b = sc.nextInt();
    			long s1=0;
    			long s2=0;
    			long max=-1;
    			while(n>0)
    			{
    				n=n-1;
    				s1=s1+1;
    				if(n%b==0)
    				{
    					s2 =(n/b) * s1;
    					if(max<s2)
    						max=s2;
    				}
    			}
    			System.out.println(max);
    		}
    	}
    } 