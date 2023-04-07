#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>

void val(int i, int a[]){
	
	for(i=0;i<=9;i++){
	system("cls");
	printf("Digite um numero:\t");
	scanf("%d",&a[i]);
	}
}

int fat(int *a[], int *b[]){
	int j=1, i, l;
	
	for(i=0;i<=9;i++){
		*b[i] = 1;
		l = *a[i];
		for(j=1;j<=l;j++){
			*b[i] *= j;
		}
	}
}

int main(){
	int i, a[9], b[9];
	
	system("color f0");
	val(i,a);
	fat(&a,&b);
	for(i=0;i<=9;i++)
		printf("\n\nFatorial de %d e: %d",a[i],b[i]);
	getch();
	return 0;
}
