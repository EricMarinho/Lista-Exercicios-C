#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int soma(int a, int b, int c){
	int i, j, s=0;
	
	if(b>c) {
		i = c;
		j = b;
	}
	else {
		i = b;
		j = c;
	}
	
	for(i=i;i<=j;i++){
		if(i%a==0){
			s += i;
		}
	}
		return(s);
}

int main(){
	int a, b, c;

	system("color f0");
	do{
		system("cls");
		printf("Digite o valor de A:\t");
		scanf("%d",&a);
	}while(a<1||a==1);
	
	printf("\n\nDigite o valor de B:\t");
	scanf("%d",&b);
	printf("\n\nDigite o valor de C:\t");
	scanf("%d",&c);
	system("cls");
	printf("A soma e: %d",soma(a,b,c));
	
	getch();
	return 0;
}
