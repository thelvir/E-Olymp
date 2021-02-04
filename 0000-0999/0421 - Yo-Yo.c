#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int res = 0;
	float l,k;

scanf("%f %f",&l,&k);

while(l / k > 1.0)

{

  l /= k;

  res++;

}

printf("%d\n",res); 
	
	
	return 0;
}
