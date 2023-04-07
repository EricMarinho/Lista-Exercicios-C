#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int s(int n){
	int q;
	
	if(n<0)
		q = 0;
	else
		q = 1;
	return(q);
}

int main(){
	int a;

	system("color f0");
	do{
		printf("Digite um numero:\n");
		scanf("%d",&a);
		system("cls");
	}while(a == 0);
	
	printf("Se o retorno for 1 e positivo e se for 0 e negativo.\n\nRetorno: %d",s(a));
	getch();
}
