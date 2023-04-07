#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int soma(int a, int b){
	int s=0, aux;
	
	if(b<a){
		aux = a;
		a = b;
		b = aux;
	}
	for(a=a+1;a<b;a++)
		s += a;
	return(s);
}

int main(){
	int n1, n2;

	system("color f0");
	do{
		printf("Digite o primeiro numero:\t");
		scanf("%d",&n1);
		printf("\nDigite o segundo numero:\t");
		scanf("%d",&n2);
		system("cls");
	}while(n1<=0&&n2<=0);
	printf("O resultado e: %d",soma(n1,n2));

	getch();
}
