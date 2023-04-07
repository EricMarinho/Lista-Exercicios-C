#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

main(){
	float vendaMedia, preçoAtual;
	
	system("color f0");
	printf("Digite a venda media mensal:\n");
	scanf("%f",&vendaMedia);
	system("cls");
	printf("Digite o preco atual:\n");
	scanf("%f",&preçoAtual);
	system("cls");
	if(vendaMedia<1000||preçoAtual<50)
		printf("O aumento e de R$:%.2f e o novo preco e: R$%.2f",preçoAtual*1/10,preçoAtual+(preçoAtual*1/10));
	else if(vendaMedia>=1000&&vendaMedia<1200||preçoAtual>=50&&preçoAtual<80)
		printf("O aumento e de R$:%.2f e o novo preco e: R$%.2f",preçoAtual*15/100,preçoAtual+(preçoAtual*15/100));
	else
		printf("A reducao e de R$:%.2f e o novo preco e: R$%.2f",preçoAtual*1/5,preçoAtual-(preçoAtual*1/5));
	
	getch();
}

