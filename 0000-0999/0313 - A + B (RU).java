import java.util.Scanner;
import java.math.BigInteger;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		scan.nextLine();
		while(n-- > 0){
			String s = scan.nextLine();
			int k = s.indexOf('+');
			System.out.println(new BigInteger(s.substring(0, k)).add(new BigInteger(s.substring(k+1))));
		}
	}
}
