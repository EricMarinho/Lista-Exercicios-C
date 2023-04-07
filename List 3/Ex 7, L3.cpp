#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

main(){
	int i;
	float n, k=1;
	
	system("color f0");
	printf("Digite o valor de 'N':\n");
	scanf("%f",&n);
	system("cls");
	for(i=1;i<=12;i++){
		k = (k + (n/k))/2;
		printf("A raiz aproximada de %.f e: %.10f\n",n,k);
		Beep(2000,500);
		_sleep(500);
	}
	getch();
}
