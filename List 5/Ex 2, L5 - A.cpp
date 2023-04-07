#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main(){
	int a[5], b[5], i, aux;
	
	system("color f0");
	for(i=0;i<5;i++){
		printf("Digite um valor para o primeiro vetor depois um para o segundo:\n");
		scanf("%d%d",&a[i],&b[i]);
		system("cls");
	}
	for(i=0;i<5;i++){
		aux = a[i];
		a[i] = b[i];
		b[i] = aux;
		printf("1- %d, 2- %d\n\n", a[i], b[i]);
	}
	getch();
	return 0;
}
