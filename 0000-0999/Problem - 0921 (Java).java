import java.util.Scanner;

public class solving 
{
	public static void main(String[] args) 
	{
		Scanner x = new Scanner(System.in);
		
		int size = x.nextInt();
		int count=0;double sum=0;
		double arr[] = new double[size];
		
		for(int i=0;i<size;i++)
		{
			arr[i] = x.nextDouble();
			if(arr[i]<0)
			{
				count++;
				sum+=arr[i];
			}
		}
		System.out.print(count + " ");
		System.out.printf("%.2f",sum);
		
	}
}
