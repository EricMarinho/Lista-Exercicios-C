#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define J 10
main(){
	char login[J][30];
	int senha[10], i;

	system("color f0");
	for(i=0;i<J;i++){
		printf("\nDigite o Login:\n");
		scanf("%s",&login[i]);
		printf("\nDigite a Senha (Somente numeros):\n");
		scanf("%d",&senha[i]);
	}
}
