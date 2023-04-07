#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void soma(int *a, int *b){
	
	*a = *a + *b;
}

int main(){
	int a, b;
	
	printf("Digite o valor de a e de b:\n");
	scanf("%d%d",&a,&b);
	soma(&a, &b);
	printf("O resultado e: %d",a);
	getch();
	return 0;
}