#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{

	int number;
	printf("Digite um numero\n");
	scanf("%d",&number);
	system("cls");
	if(number%2==0)
		printf("O numero e par");
	else
		printf("O numero e impar");

	getch();
}
