#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

main()
{
	int op;
	float salario;
	
	printf("Menu de opcoes:\n1-Imposto\n2-Novo Salario\n3-Classificacao\nDigite a opcao selecionada-> ");
	scanf("%d",&op);
	system("cls");

	switch(op)
	{
	
		case 1:

 			printf("Digite o valor do salario:\n");
 			scanf("%f",&salario);
 			system("cls");
 			if(salario<500)
				printf("O imposto e: R$%.2f",salario*1/20);
			else if(salario>=500&&salario<=850)
				printf("O imposto e: R$%.2f",salario*1/10);
			else
		 		printf("O imposto e: R$%2.f",salario*15/100);
			break;

		case 2:

			printf("Digite o salario:\n");
			scanf("%f",&salario);
			system("cls");
			if(salario>1500)
	 			printf("O novo salario e: R$%.2f",salario+25);
			else if(salario<=1500&&salario>=750)
		 		printf("O novo salario e: R$%.2f",salario+50);
			else if(salario>=450&&salario<750)
				printf("O novo salario e: R$%.2f",salario+75);
			else
				printf("O novo salario e: R$%.2f",salario+100);
			break;

		case 3:
			printf("Digite o salario:\n");
			scanf("%f",&salario);
			system("cls");
			if(salario<=700)
	 			printf("Mal remunerado");
			else
		 		printf("Bem remunerado");
			break;

		default:
			printf("Operacao invalida");

	}

	getch();
}
