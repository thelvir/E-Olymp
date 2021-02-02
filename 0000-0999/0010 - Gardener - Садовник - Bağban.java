import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
    	Scanner x = new Scanner(System.in);
    	int n,k;
    	n = x.nextInt();
    	double waterPerTree = 0;
    	int days = 0;
    	while(waterPerTree <= 0.5) {
    		waterPerTree += (double) 1 / (n - days++);
    	}
    	k = n - days +1;
    	
    	System.out.println(k);
    }
}
