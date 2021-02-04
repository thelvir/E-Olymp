#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main (){
	int length,i,j,kol=0; 
	char vowel []="AEIOUY"; 
	char text [100]; 
	gets (text);
	length=strlen (text); 
	for (j=0; j<=5; j++){
		for (i=0; i<=length; i++)
			if (text[i]==vowel[j])
				kol=kol+1;
	}
	cout << kol << endl;
	return 0;
}
