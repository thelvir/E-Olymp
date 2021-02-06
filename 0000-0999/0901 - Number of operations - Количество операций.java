import java.util.Scanner;


public class Main {
	
	public static void main(String args[]) {
		Opera A = new Opera();
		A.start();
	}
	
	
}

class Opera{
		
		Scanner sc = new Scanner(System.in);
		int say;
		String S;
		void check() {
			for(int i = 1 ; i < S.length()-1; i++) {
				if((Character.isLetter(S.charAt(i-1)) || Character.isDigit(S.charAt(i-1))) && (Character.isLetter(S.charAt(i+1)) || Character.isDigit(S.charAt(i+1))) && (S.charAt(i) == '+' || S.charAt(i) == '*' || S.charAt(i) == '-')) {
					say++;
				}
			
			}
			ans(say);
		}
		void ans ( int answer) {
			System.out.print(answer);
		}
		public void start() {
			S = sc.nextLine();
			check();
		}
	}
