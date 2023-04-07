#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main(){
	float numero;
	int op;

	system("color f0");
	do{
		printf("Digite um numero: ");
		scanf("%f",&numero);
       	printf("1) raiz quadrada.\n");
       	printf("2) log na base 10.\n");
       	printf("3) tangente.\n");
       	printf("4) Sair.\n");
       	printf("\nEscolha uma operacao: ");
    	scanf("%d",&op);
    	system("cls");
	
		switch(op){
			case 1: printf("A raiz quadrada de %.2f e: %.2f\n\n",numero,sqrtf(numero));
				break;
			case 2: printf("O log de %.2f na base 10 e: %.2f\n\n",numero,log10f(numero));
				break;
			case 3: printf("A tangente de %.2f e: %.2f\n\n",numero,tanf(numero));
				break;
		}
	}
	while(op!=4);
	
	printf("Pressione enter para sair");
	system("pause");
}
