import java.util.Scanner;
class ABC{
public void qimet_hesabi(){
    int n, count, result = 0;
    double cost;
    Scanner sc = new Scanner(System.in);
    n=sc.nextInt();
    for (int i = 0; i < n; i++) {
        count=sc.nextInt();
        cost=sc.nextDouble();
        if (cost < 50) {
            result += count;
        }
    }
    System.out.println(result);
}


}
public class Main {


    public static void main(String[] args) {
        ABC abc= new ABC();
        abc.qimet_hesabi();

}}
