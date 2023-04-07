#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

float soma(float numero){
	float soma=0, i;
	
	for(i=1;i<=numero;i++){
		soma = soma + (1/i);
	}	
	return(soma);
}

int main(){
	int numero;
	
	system("color f0");
	do{
		system("cls");
		printf("Digite o n�mero:\t");
		scanf("%d",&numero);
	}while(numero<0);
	printf("\n\nO resultado e: %.2f",soma(numero));
	getch();
	return 0;
}
