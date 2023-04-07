#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

main()
{
	float salarioMinimo, horasTrabalhadas, dependentes, horasExtras, salarioBruto, salarioLiquido, valorHoraTrabalhada;

// Hora trabalhada = 1/5 do sal�rio m�nimo
// Sal�rio do m�s = n� hrs trabalhadas * valor da hora trabalhada
// Para cada dependente um acr�ssimo de R$32,00
// Cada hora extra trabalhada = O valor da hora trabalhada + 50%
// Valor do sal�rio bruto = Sal�rio do m�s + acr�ssimos dos dependentes + valor das horas extras
// IRRF de acordo com a tabela
// Sal�rio l�quido = Sal�rio bruto menos IRRF
// Gratifica��o de acordo com a tabela

	printf("Digite o valor do salario minimo:\n");
	scanf("%f",&salarioMinimo);
	system("cls");
	printf("Digite o numero de horas trabalhadas:\n");
	scanf("%f",&horasTrabalhadas);
	system("cls");
	printf("Digite a quantia de dependentes:\n");
	scanf("%f",&dependentes);
	system("cls");
	printf("Digite a quantia de horas extras trabalhadas:\n");
	scanf("%f",&horasExtras);
	system("cls");

	valorHoraTrabalhada= salarioMinimo/5;
	salarioBruto = (valorHoraTrabalhada*horasTrabalhadas)+(32*dependentes)+(valorHoraTrabalhada + (valorHoraTrabalhada * 50/100));
	if(salarioBruto<200)
		salarioLiquido = salarioBruto;
	else if(salarioBruto>=200&&salarioBruto<=500)
		salarioLiquido = salarioBruto-(salarioBruto/10);
	else
		salarioLiquido = salarioBruto-(salarioBruto/5);
	if(salarioLiquido<=350)
		printf("O salario a receber e: R$%.2f",salarioLiquido+100);
	else
		printf("O salario a receber e: R$%.2f",salarioLiquido+50);

	getch();
}
