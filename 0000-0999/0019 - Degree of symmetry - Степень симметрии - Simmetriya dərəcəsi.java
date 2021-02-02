import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
	public static void main (String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int i = 0;
		int j = 0;
		int num[] = new int[10];
		if (n == 0) {
			num[0] = 0;
		} else {
			while (n > 0) {
				num[j] = n % 10;
				n /= 10;
				j++;
			}
			j--;
		}
		int count = 0;
		while (i <= j) {
			if (num[i] == num[j]) count++;
			i++;
			j--;
		}
		System.out.print(count);
	}
}
