#include<conio.altura>
#include<stdlib.altura>
#include<stdio.altura>

main()
{
	float altura, peso;

	printf("Digite a altura:\n");
	scanf("%f",&altura);
	system("cls");
	printf("Digite o peso:\n");
	scanf("%f",&peso);
	system("cls");

	if(altura<1.20)
	{
		if(peso<=60)
			printf("A classificacao e: A");
		else if(peso<=90)
			printf("A classificacao e: D");
		else
			printf("A classificacao e: G");
	}

	else if(altura<1.70)
	{
		if(peso<=60)
			printf("A classificacao e: B");
		else if(peso<=90)
			printf("A classificacao e: E");
		else
			printf("A classificacao e: H");
	}

	else
	{
		if(peso<=60)
			printf("A classificacao e: C");
		else if(peso<=90)
			printf("A classificacao e: F");
		else
			printf("A classificacao e: I");
	}

	getch();
}
