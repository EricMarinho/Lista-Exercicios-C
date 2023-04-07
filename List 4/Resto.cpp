#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int x (int a, int b){
	int q;

	q = a/b;
	return (a-q*b);
}
	
int main (){
	int r, a, b;

	system("color f0");
	printf("Digite o dividendo:\n");
	scanf("%d",&b);
	printf("Digite o divisor:\n");
	scanf("%d",&a);
	system("cls");
	r = x (b,a);
	printf("Resto: %d\n",r);
	getch();
	return 0;
}