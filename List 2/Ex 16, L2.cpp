#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

main()
{
	float vendaMedia, precoAtual;

	printf("Digite o valor da Venda Media Mensal:\n");
	scanf("%f",&vendaMedia);
	system("cls");
	printf("Digite o valor do Preco Atual:\n");
	scanf("%f",&precoAtual);
	system("cls");
	
	if(vendaMedia<500||precoAtual<30)
		printf("O novo preco e: %.2f",precoAtual+precoAtual*1/10);
	else if(vendaMedia<1200||precoAtual<80)
		printf("O novo preco e: %.2f",precoAtual+precoAtual*15/100);
	else if(vendaMedia>=1200||precoAtual>=80)
		printf("O novo preco e: %.2f",precoAtual-precoAtual*1/5);
	else
	 	printf("Operacao invalida");

	getch();
}		
