#include<stdio.h>
#include<stdlib.h>

int fat(int a){
	int f=1;
	
	for(a=a;a>=1;a--)
		f = f*a;
	return(f);
}

main(){
	int a, f;
	
	system("color f0");
	printf("Digite o numero pelo qual deseja achar o fatorial:\n");
	scanf("%d",&a);
	system("cls");
	f = fat(a);
	printf("O valor do fatorial de %d e: %d",a,f);
}