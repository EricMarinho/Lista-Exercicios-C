#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

main()
{
	float op, salario;

	printf("(1=Escrituario, 2=Secretario, 3=Caixa, 4=Gerente, 5=Diretor)\nDigite o codigo equivalente ao seu cargo:\n");
	scanf("%f",&op);
	system("cls");
	printf("Digite o valor do salario:\n");
	scanf("%f",&salario);
	system("cls");
	switch(op)
	{
		case 1:
			printf("Escrituario: O aumento e de R&%.2f e o novo salario e R$%.2f.",salario*1/2,salario+salario*1/2);
		case 2:
			printf("Secretario: O aumento e de R&%.2f e o novo salario e R$%.2f.",salario*35/100,salario+salario*35/100);
		case 3:
			printf("Caixa: O aumento e de R&%.2f e o novo salario e R$%.2f.",salario*1/5,salario+salario*1/5);
		case 4:
			printf("Gerente: O aumento e de R&%.2f e o novo salario e R$%.2f.",salario*1/10,salario+salario*1/10);
		case 5:
			printf("Diretor: Nao ha aumento e o salario e R$%.2f.",salario);
		default:
			printf("Codigo invalido");
	}

	getch();
}
