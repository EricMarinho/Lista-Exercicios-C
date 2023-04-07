#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	int numero, quantidadeSoma, i, ss=0;
	
	system("color F0");
	printf("Digite a quantidade de somas:\n");
	scanf("%d",&quantidadeSoma);
	system("cls");
	for(i=0;i<quantidadeSoma;i++){
		printf("Digite o valor do num da soma:\n");
		scanf("%d",&numero);
	if(numero<0)
		continue;
	ss = ss + numero;
	}
	system("cls");
	printf("O valor da soma e: %d",ss);
	getch();
}
