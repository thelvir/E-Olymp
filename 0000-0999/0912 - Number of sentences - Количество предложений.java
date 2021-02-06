import java.util.Scanner;

public class solution {
	
	 	public static void main(String[] args) {
	        Scanner x = new Scanner(System.in);
	       int count=1;
	       String s = x.nextLine();
	       for(int i=0;i<s.length()-1;i++)
	       {
	    	   if((s.charAt(i)=='.' && s.charAt(i+1)!='.' ) || (s.charAt(i)=='!' && s.charAt(i+1)!='!' ))
	    	   {
	    		   count++;
	    	   }
	       }
	       System.out.println(count);
	    }
	}
