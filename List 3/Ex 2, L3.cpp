#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

main(){
	int i;
	float numero, soma=1, fatorial=1;
	
	system("color f0");
	do{
		system("cls");
		printf("Digite o Num.:\numero");
		scanf("%f",&numero);
		system("cls");
		if(numero==0)
			printf(" ");
			else{
				printf("Fatorial de 1 tem soma atual de: 1.00\numero");	
				Beep(2000,250);
				_sleep(500);
			}
		for(i=2;i<=numero;i++){
			fatorial *= i;
			soma += (1/fatorial);
			if(i<numero)
				printf("Fatorial de 1/%d tem soma atual de: %.2f\numero",i,soma);
			else{
				printf("Fatorial de 1/%d tem soma FINAL de: %.2f\numero",i,soma);
				system("pause");}
				Beep(2000,250);
				_sleep(500);}
	}while(numero!=0);
	printf("Sair");
	getch();
}
