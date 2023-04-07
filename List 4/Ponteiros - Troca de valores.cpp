#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void troca(int *a, int *b){
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int main(){
	
	int a=25, b=12;

	system("color f0");
	printf("a = %d e b = %d",a,b);
	troca(&a,&b);
	printf("\n\na = %d e b = %d",a,b);
	getch();
	return 0;
}
