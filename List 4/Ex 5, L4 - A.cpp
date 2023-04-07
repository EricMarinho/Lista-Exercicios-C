#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int aum(int a, int b){
	int x;
	
	x = (100*b)/a;
	return(x-100);
}

int main(){
	int precoAntigo, precoAtual;
	
	system("color f0");
	printf("Digite o preco antigo:\t");
	scanf("%d",&precoAntigo);
	system("cls");
	printf("Digite o preco atual:\t");
	scanf("%d",&precoAtual);
	system("cls");
	printf("O aumento e de %d porcento",aum(precoAntigo,precoAtual));
	getch();
	return 0;
}
