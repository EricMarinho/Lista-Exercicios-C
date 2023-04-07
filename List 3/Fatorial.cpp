#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	int i, n, f;
	
	system("color f0");
	printf("Digite o numero:\n");
	scanf("%d",&n);
	system("cls");
	f = 1;
	for(i=n;i>1;i--)
		f *=i ;
	printf("O valor de %d fatorial e: %d",n,f);
	getch();
}
