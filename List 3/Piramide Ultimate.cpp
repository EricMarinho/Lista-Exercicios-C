#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	int i, j, z;
	
	system("color f0");
	printf("Digite o primeiro numero da piramide:\n");
	scanf("%d",&z);
	system("cls");
	for(i=z;i>=1;i--){
		for(j=i;j>=1;j--)
			printf("%d ",j);
		printf("\n");
	}
	return 0;
}
