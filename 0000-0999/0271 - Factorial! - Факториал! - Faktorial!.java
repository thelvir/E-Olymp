import java.util.Scanner;
import java.math.BigInteger;

public class factorial {
  public static BigInteger factorial(int num){
    BigInteger fact = BigInteger.valueOf(1);
    for (int i = 1; i <= num; i++)
      fact = fact.multiply(BigInteger.valueOf(i));
     return fact;
}
 
  public static void main(String[] args) throws java.lang.Exception{
  Scanner input = new Scanner(System.in); 
  int x;
  x = input.nextInt(); 
  System.out.println(factorial(x));
  }
}
