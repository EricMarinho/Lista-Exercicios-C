#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define J 5
main (){
	int i, mc;
	char mod[J][30];
	float c[J], v, me;

	system("color f0");
	for(i = 0; i<J; i++){
		printf("\nDigite o modelo do carro:\n");
		scanf("%s",&mod[i]);
		printf("\nDigite o consumo do carro (km/l):\n");
		scanf("%f",&c[i]);
	}
	for(i = 0; i < J; i++){
		if(i == 0){
			me = c[i];
			mc = 0;
		}
		else{
		 	if (c[i] > me){
			 	me = c[i];
 				mc = i;
			}
 		}
 		v = 1000 / c[i];
 		printf("\nO carro do modelo %s consome %.2f litros para rodar 1000 km\n",mod[i],v);
	}
	printf("\nO carro com o menor consumo e: %s\n",mod[mc]);
	getch();
	return 0;
}
