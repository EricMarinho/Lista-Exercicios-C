#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

main(){
	int quantidadeFatoriais, i, a, j;
	float fat;

	system("color f0");
	printf("Digite o numero de fatoriais:\n");
	scanf("%d",&quantidadeFatoriais);
	system("cls");
	for(i=1;i<=quantidadeFatoriais;i++){
		printf("Digite o %d n�mero:  ",i);
		scanf("%d",&a);
		for(j=a;j>1;j--){
			if(j==a)
				fat=1;
			fat*=j;
		}
		printf("\n\t\t\tFat: %d �� Res: %.2f\n",a,fat);
	}
	getch();
}
