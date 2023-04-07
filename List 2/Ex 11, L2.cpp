#include <conio.h>
#include<stdlib.h>
#include<stdio.h>

main()
{
	int hrInicial, minInicial, hrFinal, minFinal, minDuracao, hrDuracao;
	
	printf("Digite o horario de inicio:\nHora(s):\n");
	scanf("%d",&hrInicial);
	system("cls");
	printf("Minuto(s):\n");
	scanf("%d",&minInicial);
	system("cls");
	printf("Digite o horario de termino:\nHora(s):");
	scanf("%d",&hrFinal);
	system("cls");
	printf("Minuto(s):\n");
	scanf("%d",&minfin);
	system("cls");
	if(minfin<minInicial)
	{
		minfin = minfin + 60;
		hrFinal = hrFinal - 1;
	}
	if(hrFinal<hrInicial)
	{
		hrFinal = hrFinal + 24;
	}
	minDuracao = minfin - minInicial;
	hrDuracao = hrFinal - hrInicial;
	printf("A duracao do jogo e de: %d:%d",hrDuracao,minDuracao);

	getch();
}
