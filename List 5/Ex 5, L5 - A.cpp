#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
main(){
	int a[10], b[10], c[20], j=0, k=0, i;
	
	system("color f0");
	for(i=0;i<10;i++){
		printf("Digite um valor pro primeiro e um para o segundo vetor:\n");
		scanf("%d %d",&a[i],&b[i]);
		system("cls");
	}
	for(i=0;i<20;i++){
		if(i==0||i%2==0){
			c[i] = a[j];
			j++;
		}
		if(i!=0&&i%2!=0){
			c[i] = b[k];
			k++;
		}
	}
	for(i=0;i<20;i++)
		printf("%d	",c[i]);
	getch();
	return 0;
}
