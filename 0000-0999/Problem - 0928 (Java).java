import java.util.Scanner;

public class hell 
{
	public static void main(String[] args)
	{
		Scanner x = new Scanner(System.in);
		int size = x.nextInt();
		int max=-101;
		int min =101;
		int arr[] = new int[size];
		
		for(int i=0;i<size;i++)
		{
			arr[i] = x.nextInt();
			if(arr[i]>max)
				max=arr[i];
			if(arr[i]<min)
				min=arr[i];
		}
		
		System.out.println(min+max);
		
	}
}
