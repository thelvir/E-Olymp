import java.util.Scanner;

public class solution
{
	public static void main(String [] args)
	{
		   Scanner x = new Scanner(System.in);
		   int n;
		   n=x.nextInt();
		   int arr[] = new int[n];
		   
		  
		   
		   
		   
		   for(int i=0;i<n;i++)
		   {
			   arr[i]=x.nextInt();
			   if(arr[i]>=0)
			   {
				   arr[i]=arr[i]+2; 
			   }
		   }
		   
		   for(int i=0;i<n;i++)
		   {
			   System.out.print(arr[i]);
			   System.out.print(" ");
		   }	
	}
}
