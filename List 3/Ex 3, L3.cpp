#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

main(){
	int i,j=4,n;
	
	system("color f0");
	do{
		system("cls");
		printf("Digite o numero de series:\n");
		scanf("%d",&n);
		system("cls");
		for(i=1;i<=n;i++&&j++){
			printf("%d %d %d\t ",i,j,j);
			Beep(2000,250);
			_sleep(500);}
	}while(n!=0);
	printf("Sair");
	getch();
}
