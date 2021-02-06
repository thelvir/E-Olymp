import java.util.Scanner;

public class hell 
{
	public static void main(String[] args)
	{
		Scanner x = new Scanner(System.in);
		
		long a = x.nextLong();
		double sum=0,has=1;
		long b;
		double g;
		while(a>0)
		{
			b=a%10;
			a/=10;
			sum+=b;
			has*=b;
		}
		g=has/sum;
		System.out.printf("%.3f",g);
		
	}
}
