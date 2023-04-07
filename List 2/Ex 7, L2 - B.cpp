#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{

	int op;
	float a, b, c;

	printf("Digite o valor de A:\n");
	scanf("%f",&a);
	system("cls");
	printf("Digite o valor de B:\n");
	scanf("%f",&b);
	system("cls");
	printf("Digite o valor de C:\n");
	scanf("%f",&c);
	system("cls");
	printf("(I=1 caso deseje ordem crescente,I=2 caso deseje ordem decrescente,I=3 caso queira o maior no meio\nDigite I:\n");
	scanf("%d",&op);
	system("cls");

	switch(op)
	{
		case 1:
			if(a<b&&b<c)
				printf("A ordem crescente e: %.f,%.f,%.f",a,b,c);
			else if(a<c&&c<b)
				printf("A ordem crescente e: %.f,%.f,%.f",a,c,b);
			else if(b<a&&a<c)
				printf("A ordem crescente e: %.f,%.f,%.f",b,a,c);
			else if(b<c&&c<a)
				printf("A ordem crescente e: %.f,%.f,%.f",b,c,a);
			else if(c<a&&a<b)
				printf("A ordem crescente e: %.f,%.f,%.f",c,a,b);
			else
				printf("A ordem crescente e: %.f,%.f,%.f",c,b,a);
			break;

		case 2:
			if(a>b&&b>c)
				printf("A ordem decrescente e: %.f,%.f,%.f",a,b,c);
			else if(a>c&&c>b)
				printf("A ordem decrescente e: %.f,%.f,%.f",a,c,b);
			else if(b>a&&a>c)
				printf("A ordem decrescente e: %.f,%.f,%.f",b,a,c);
			else if(b>c&&c>a)
				printf("A ordem decrescente e: %.f,%.f,%.f",b,c,a);
			else if(c>a&&a>b)
				printf("A ordem decrescente e: %.f,%.f,%.f",c,a,b);
			else
				printf("A ordem decrescente e: %.f,%.f,%.f",c,b,a);
			break;

		case 3:
			if(a>b&&a>c)
				printf("A ordem com o maior no meio e: %.f,%.f,%.f",b,a,c);
			else if(b>a&&b>c)
				printf("A ordem com o maior no meio e: %.f,%.f,%.f",a,b,c);
			else
				printf("A ordem com o maior no meio e: %.f,%.f,%.f",a,c,b);
			break;

		default:
			printf("Opcao invalida");

	}

	getch();
}