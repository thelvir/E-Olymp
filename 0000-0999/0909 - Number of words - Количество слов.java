import java.util.Scanner;

public class solution {
	
	 	public static void main(String[] args) {
	        Scanner x = new Scanner(System.in);
	       String s= x.nextLine();
	       int count=1;
	       for(int i=0;i<s.length()-1;i++)
	       {
	    	   if((s.charAt(i)==' ') && (s.charAt(i+1)!=' '))
	    	   {
	    		   count++;
	    	   }
	       }
	       System.out.println(count);
	    }
	}
