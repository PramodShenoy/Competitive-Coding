    import java.util.*;
     
    class calc
    {
    	public static void main(String[] args) 
    	{
    		Scanner sc = new Scanner(System.in);
    		int t=sc.nextInt();
    		for(int z=0;z<t;z++)
    		{
    			int n = sc.nextInt();
    			int b = sc.nextInt();
    			int s1=0;
    			int s2=0;
    			int max=-1;
    			while(n>=0)
    			{
    				n=n-1;
    				s1=s1+1;
    				if(n%b==0)
    				{
    					int s = n;
    					int sum=0;
    					while(s>0)
    					{
    						s=s-b;
    						sum = sum+s1;
    					}
    					if(max<sum)
    							{
    								max=sum;
    								//System.out.println(max);
    							}
    				}
    			}
    			System.out.println(max);
    		}
    	}
    } 
