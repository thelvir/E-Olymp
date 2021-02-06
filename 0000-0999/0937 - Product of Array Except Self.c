#include<stdio.h>
int main (){
	long long a,b,c,d,f,g,h,n;
	scanf("%lld",&n);
	h=1;
	long long j=-1,p,m,l;
	long long k[n];
	l=0;
	for(a=0;a!=n;a++){
		scanf("%lld",&b);
		if(b==0){
		j=10;
		p=a;
		l++;
		b=1;}
		k[a]=b;
		h*=b;
	}
	if(l>=2)
	h=0;
	if (j==10){
		for (m=0;m!=n;m++){
			if (m==p)
			k[m]=h;
			else 
			k[m]=0;
		}
		for(m=0;m!=n;m++){
			printf("%lld ",k[m]);
		}
	}
	else{
	
	for (d=0;d!=n;d++){
		
    g=h/k[d];
    printf("%lld ",g);
	}}
	
	return 0;
}
