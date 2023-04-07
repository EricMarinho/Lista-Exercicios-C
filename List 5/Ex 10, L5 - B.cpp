#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define J 5
void car(float p[], char g[][30]){
	int mc, i;
	float v, me;

	for(i = 0; i < J; i++){
		if(i == 0){
			me = p[i];
			mc = 0;
		}
		else{
		 	if (p[i] > me){
			 	me = p[i];
 				mc = i;
			}
 		}
 		v = 1000 / p[i];
 		printf("O carro do modelo %s consome %.2f litros para rodar 1000 km\n",g[i],v);
	}
	printf("\nO carro com o menor consumo e: %s\n",g[mc]);
}

int main (){
	int i;
	char mod[J][30];
	float c[J];

	system("color f0");
	for(i = 0; i<J; i++){
		printf("Digite o modelo do carro:\n");
		scanf("%s",&mod[i]);
		printf("Digite o consumo do carro (km/l):\n\n");
		scanf("%f",&c[i]);
	}
	car(c,mod);
	getch();
	return 0;
}
