import java.util.Scanner;

public class solving 
{
	public static void main(String[] args) 
	{
		Scanner x = new Scanner(System.in);
		
		int size = x.nextInt();
		int temp=0;
		int arr[] = new int[size];
		
		for(int i=0;i<size;i++)
		{
			arr[i] = x.nextInt();
		}
			
		System.out.print(arr[size-1] + " ");
		
		for(int i=0;i<size-1;i++)
		{
			System.out.print(arr[i]+" ");
		}
		
		
	}
}
