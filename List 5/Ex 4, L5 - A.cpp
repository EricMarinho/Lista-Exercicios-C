#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
main(){
	int a[8], b[8], c[8], i, j=0, q=0;
	
	system("color f0");
	for(i=0;i<8;i++){
		printf("Digite um numero:\t");
		scanf("%d",&a[i]);
		system("cls");
		if(a[i]>0){
			b[j] = a[i];
			j++;
		}
		if(a[i]<0){
			c[q] = a[i];
			q++;
		}
	}
	if(j!=0){
		for(i=0;i<j;i++)
			printf("Positivo: %d\n",b[i]);
	}
	if(q!=0){
		for(i=0;i<q;i++)
			printf("\nNegativo: %d",c[i]);
	}
	getch();
	return 0;
}
