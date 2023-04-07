#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{
	int op;
	float numero1, numero2;

	printf("Digite 1 para somar e 2 para raiz quadrada.\n");
	scanf("%d",&op);
	system("cls");

	switch(op)
	{
		case 1:
			printf("Digite os numeros da soma\n");
			scanf("%f%f",&numero1,&numero2);
			system("cls");
			printf("O valor da soma e: %.0f",numero1+numero2);
			break;
	
		case 2:
			printf("Digite a base para a raiz:\n");
			scanf ("%f",&numero1);
			system("cls");
			printf("O valor da raiz quadrada e: %.2f",pow(numero1,1.0/2.0));
			break;

		default:
			printf("Operacao invalida");
	}
	
	getch();
}
