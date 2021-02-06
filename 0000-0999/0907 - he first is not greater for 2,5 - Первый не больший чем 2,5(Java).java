import java.util.Scanner;

public class solving 
{
	public static void main(String[] args) 
	{
		Scanner x = new Scanner(System.in);
		int count = 0;
		double e = 0;
		int size = x.nextInt();
		double arr [] = new double[size];
		
		for(int i=0;i<size;i++)
		{
			arr[i] = x.nextDouble();
			count++;			
			if(arr[i]<=2.5)
			{
				e=arr[i];
				break;
			}
		}
		
		if(e!=0) 
		{
			String s = String.format(" %.2f", e);
			System.out.print(count);
			System.out.println(s);
		}	
		else
			System.out.println("Not Found");
		
		
	}
}
