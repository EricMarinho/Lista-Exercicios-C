#include<stdio.h>
#include<stdlib.h>

double fat (int a){
double f=1.0;

	while (a>1){
		f = f*a;
		a--;
	}
	return(f);
}

main(){
	int b, fatorial;

	system("color f0");
	printf("Digite o numero pelo qual deseja achar o fatorial:\n");
	scanf("%d",&b);
	system("cls");
	fatorial = fat(b);
	printf("O valor do fatorial de %d e: %d",b,fatorial);
}