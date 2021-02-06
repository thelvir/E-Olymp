import java.util.Scanner;

public class mesele {

	public static void main(String[] args) {
		Scanner x = new Scanner(System.in);
		int s = x.nextInt();
		int a = s/1000;
		int b = s/100%10;
		int c = s/10%10;
		int d = s%10;
		
		System.out.println(d+a);
		
	}

}
