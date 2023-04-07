#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

main()
{
	int codigoDoProduto, codigoPaisOrigem;
	float pesoQuilo, pesoGrama;
	
	printf("Digite o codigo do produto (Numeros entre 1 e 10):\n");
	scanf("%d",&codigoDoProduto);
	system("cls");
	printf("Digite o peso do produto em quilos:\n");
	scanf("%f",&pesoQuilo);
	system("cls");
	printf("Digite o codigo do pais de origem (Numeros de 1 a 3):\n");
	scanf("%d",&codigoPaisOrigem);
	system("cls");

	if(codigoDoProduto<=4)
		pesoGrama = (pesoQuilo*1000)*10;
	else if(codigoDoProduto<=7)
		pesoGrama = (pesoQuilo*1000)*25;
	else
		pesoGrama = (pesoQuilo*1000)*35;
	if(codigoPaisOrigem==1)
		printf("O peso em gramas e: %.2f\nO preco total do produto e: %.2f\nNao ha imposto\nO valor total e: %.2f",pesoQuilo*1000,pesoGrama,pesoGrama);
	else if(codigoPaisOrigem==2)
		printf("O peso em gramas e: %.2f\nO preco total do produto e: %.2f\nO valor do imposto e: %.2f\nO valor total e: %.2f",pesoQuilo*1000,pesoGrama,pesoGrama*15/100,pesoGrama-pesoGrama*15/100);
	else
		printf("O peso em gramas e: %.2f\nO preco total do produto e: %.2f\nO valor do imposto e: %.2f\nO valor total e: %.2f",pesoQuilo*1000,pesoGrama,pesoGrama*1/4,pesoGrama-pesoGrama*1/4);

	getch();
}
