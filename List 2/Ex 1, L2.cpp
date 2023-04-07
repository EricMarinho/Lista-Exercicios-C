#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{
	float number1, number2, number3, mean;
	
	printf("Digite a nota do Trabalho de Laboratorio:\n");
	scanf("%f",&number1);
	system("cls");
	printf("Digite a nota da Avaliacao Semestral:\n");
	scanf("%f",&number2);
	system("cls");
	printf("Digite a nota do Exame Final:\n");
	scanf("%f",&number3);
	system("cls");
	mean = (number1*2+number2*3+number3*5)/10;
	if(mean>=8)
		printf("Nota: A");
	else if(mean>=7)
		printf("Nota: B");
	else if(mean>=6)
		printf("Nota: C");
	else if(mean>=5)
		printf("Nota: D");
	else
		printf("Nota: E");
	getch();

}
