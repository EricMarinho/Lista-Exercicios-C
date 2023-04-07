#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

main(){
	int i, n;

	system("color f0");
	do{
		printf("Tabuada de __ :\t");
		scanf("%d",&n);
		for(i=1;i<=10;i++){
			if(n<=10)
				printf("%d x %d = %d\n",n,i,n*i);
			else
				system("cls");
		}
		if(i=10){
			system("pause");
			system("cls");
		}
	}while(n<=10);
	printf("Sair");
	getch();
}
