import java.util.Scanner;

public class solving 
{
	public static void main(String[] args) 
	{
		Scanner x = new Scanner(System.in);
		
		int size = x.nextInt();
		double max = -101;
		double arr[] = new double[size];
		
		for(int i=0;i<size;i++)
		{
			arr[i]=x.nextDouble();
				if(arr[i]<0)
					arr[i]*=-1;
				if(arr[i]>max)
				{
					max=arr[i];
				}
		
		}
		
		System.out.printf("%.2f",max);
	}
}
