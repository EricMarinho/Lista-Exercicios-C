#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

main()
{
	int codigoEstado;
	float pesoToneladas, codigoCarga, pesoQuilo;

	printf("Digite o peso da carga em toneladas:\n");
	scanf("%f",&pesoToneladas);
	system("cls");
	printf("Digite o codigo da carga:\n");
	scanf("%f",&codigoCarga);
	system("cls");

	if(codigoCarga>=10&&codigoCarga<=20)
		pesoQuilo = (pesoToneladas*1000)*100;
	else if(codigoCarga>=21&&codigoCarga<=30)
		pesoQuilo = (pesoToneladas*1000)*250;
	else if(codigoCarga>=31&&codigoCarga<=40)
		pesoQuilo = (pesoToneladas*1000)*340;
	else
	{
		printf("Codigo Invalido\n");
		getch();
	}
	
	printf("Digite o codigo do estado de origem:(Numeros de 1 a 5)\n");
	scanf("%d",&codigoEstado);
	system("cls");
	if(codigoEstado==1)
		printf("O peso da carga em quilos e: %.2f\nO preco da carga  e: %.2f\nO valor do imposto e: %.2f\nO valor total com imposto e: %.2f",pesoToneladas*1000,pesoQuilo,pesoQuilo*35/100,pesoQuilo-(pesoQuilo*35/100));
	else if(codigoEstado==2)
		printf("O peso da carga em quilos e: %.2f\nO preco da carga  e: %.2f\nO valor do imposto e: %.2f\nO valor total com imposto e: %.2f",pesoToneladas*1000,pesoQuilo,pesoQuilo*1/4,pesoQuilo-(pesoQuilo*1/4));
	else if(codigoEstado==3)
		printf("O peso da carga em quilos e: %.2f\nO preco da carga  e: %.2f\nO valor do imposto e: %.2f\nO valor total com imposto e: %.2f",pesoToneladas*1000,pesoQuilo,pesoQuilo*15/100,pesoQuilo-(pesoQuilo*15/100));
	else if(codigoEstado==4)
		printf("O peso da carga em quilos e: %.2f\nO preco da carga  e: %.2f\nO valor do imposto e: %.2f\nO valor total com imposto e: %.2f",pesoToneladas*1000,pesoQuilo,pesoQuilo*1/20,pesoQuilo-(pesoQuilo*1/20));
	else
		printf("O peso da carga em quilos e: %.2f\nO preco da carga  e: %.2f\nNao ha imposto\nO valor total com imposto e: %.2f",pesoToneladas*1000,pesoQuilo,pesoQuilo);
	
	getch();
}
