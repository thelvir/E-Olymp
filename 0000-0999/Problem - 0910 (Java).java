import java.util.Scanner;

public class solving 
{
	public static void main(String[] args) 
	{
		Scanner x = new Scanner(System.in);
		
		int size = x.nextInt();
		
		double orta=0; int a=0;
		
		double arr[] = new double[size];
		
		for(int i=0;i<size;i++)
		{
			arr[i]=x.nextDouble();
			if(arr[i]>0)
			{
				a++;
				orta+=arr[i];
			}			
		}
			if(a>0)
			{
				double c = orta/a;
				System.out.printf("%.2f",c);				
			}
			else
				System.out.println("Not Found");
		
	}
}
