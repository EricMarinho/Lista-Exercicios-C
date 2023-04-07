#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

main(){
	
	int quantidade, i, numero, j;
	float fat;
	
	system("color f0");
	printf("Digite o numero de fatoriais:\n");
	scanf("%d",&quantidade);
	system("cls");
	for(i=1;i<=quantidade;i++){
		printf("Digite o %d numero:\n",i);
		scanf("%d",&numero);
		for(j=numero;j>1;j--){
			if(j==numero)
				fat=1;
			fat*=j;
		}
		printf("O fatorial de %d e: %.2f\n\n",numero,fat);
		system("pause");
	}

	getch();
}
