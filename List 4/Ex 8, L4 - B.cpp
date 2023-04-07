#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

float fat(float numero){
	float soma=0;
	int n;
	
	for(n=1;n<=numero;n++)
		soma += (pow(n,2)+1)/(n+3);
	return (soma);
}

int main(){
	float numero;
	
	system("color f0");
	printf("Digite o numero:\t");
	scanf("%f",&numero);
	printf("O resultado e: %.2f",fat(numero));
}
