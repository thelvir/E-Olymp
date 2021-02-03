import java.util.*;
import java.lang.*;
import java.io.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int[] Q = { 500, 200, 100, 50, 20, 10 };
		int n, q, x; //q - вспомогательная переменная в цикле
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		x=0; //количество купюр,  ему по умолчанию присваивается 0
		for(int i = 0; i < 6; ++i) //цикл перебирает все элементы массива, от большего к меньшему
		{
			q = Q[i];
			x += n / q; //считаем, сколько раз входит купюра в сумму
			n %= q;  //сумме присваивается остаток от деления на данную купюр
		}
		if(n > 0) x = -1; //проверяем наличие остатка, который банкомат не сможет выдать
		System.out.format("%d", x);
	}
}
