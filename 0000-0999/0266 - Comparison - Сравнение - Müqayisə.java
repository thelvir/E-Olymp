import java.util.Scanner;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
		String x, y;
		x = in.next();
		y = in.next();
		if (x.length() > y.length() ){
			System.out.print('>');
		}
		else if (x.length() < y.length() ){
			System.out.print('<');
		}
		else {
			int i = 0;
			while (i < x.length() && x.charAt(i) == y.charAt(i)){
				i++;
			}
		if (i == x.length()) System.out.print('=');
		else if (x.charAt(i) < y.charAt(i)) System.out.print('<');
		else System.out.print('>');
		}
	}
}
