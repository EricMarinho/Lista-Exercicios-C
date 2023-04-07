#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int media (int numero1, int numero2, int numero3){

	return((numero1+numero2+numero3)/3);}
	
int main(){
	int media, numero1, numero2, numero3;

	system("color f0");
	printf("Digite o primeiro numero da soma:\n");
	scanf("%d",&numero1);
	system("cls");
	printf("Digite o segundo numero da soma:\n");
	scanf("%d",&numero2);
	system("cls");
	printf("Digite o terceiro numero da soma:\n");
	scanf("%d",&numero3);
	system("cls");
	media = media(numero1,numero2,numero3);
	if(media>=5)
		printf("Aprovado");
	else
		printf("Reprovado");
	getch();
	return 0;
}
