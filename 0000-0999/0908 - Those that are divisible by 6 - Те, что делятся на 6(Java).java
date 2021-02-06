import java.util.Scanner;

public class solving 
{
	public static void main(String[] args) 
	{
		Scanner x = new Scanner(System.in);
		int count=0,sum=0;
		int size=x.nextInt();
		int arr[] = new int[size];
		
		for(int i=0;i<size;i++)
		{
			arr[i] = x.nextInt();
			if(arr[i]%2==0 && arr[i]%3==0 && arr[i]>0)
			{
				count++;
				sum+=arr[i];
			}
		}
		
		System.out.println(count + " " + sum);
		
	}
}
