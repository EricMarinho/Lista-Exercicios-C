#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

main()
{
	float salario;
	
	printf("Digite o salario:\n");
	scanf("%f",&salario);
	system("cls");

	if(salario<=500)
		printf("O novo salario e: R$%.2f",(salario+salario*1/20)+150);
 	else if(salario>500&&salario<=600)
 		printf("O novo salario e: R$%.2f",(salario+salario*12/100)+150);
 	else if(salario>600&&salario<=1200)
 		printf("O novo salario e: R$%.2f",(salario+salario*12/100)+100);
 	else
 		printf("O novo salario e: R$%.2f",salario+100);
	getch();
	
}
