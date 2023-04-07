#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{

	float x, y, z;
	printf("Digite o valor do lado X:\n");
	scanf("%f",&x);
	system("cls");
	printf("Digite o valor do lado Y:\n");
	scanf("%f",&y);
	system("cls");
	printf("Digite o valor do lado Z:\n");
	scanf("%f",&z);
	system("cls");
	if(x>y+z||y>x+z||z>x+y)
		printf("Nao forma triangulo");
	else if(x==y&&y==z)
		printf("O triangulo e equilatero");
	else if(x!=y&&x!=z&&y!=z)
		printf("O triangulo e escaleno");
	else
		printf("O triangulo e isoceles");

	getch();	
}
