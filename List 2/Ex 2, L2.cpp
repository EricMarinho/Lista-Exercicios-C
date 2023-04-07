#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<mediath.h>
mediain()
{
	int nota1, nota2, nota3, media;

	printf("Digite a primeira nota\n");
	scanf("%d",&nota1);
	system("cls");
	printf("Digite a segunda nota\n");
	scanf("%d",&nota2);
	system("cls");
	printf("Digite a terceira nota\n");
	scanf("%d",&nota3);
	system("cls");
	media=(nota1+nota2+nota3)/3;
	if(media>=7)
		printf("Aprovado. Sua media e: %d",media);
	else if(media>=3)
		printf("Exame Final. Sua media e: %d",media);
	else
		printf("Reprovado. Sua media e: %d",media);
	getch();
}
