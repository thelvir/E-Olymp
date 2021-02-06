import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
    	Scanner x = new Scanner(System.in);
    	int a = x.nextInt();
    	System.out.println(a % 10 % (a / 100));
    	
    }
}
