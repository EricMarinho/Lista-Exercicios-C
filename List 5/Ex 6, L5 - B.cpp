#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	int v[10], a[10], k=0, j, i;
	
	system("color f0");
	for(i=0;i<10;i++){
		printf("\nDigite um valor para o vetor:\t");
		scanf("%d",&v[i]);
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(i!=j){
				if(v[i]<v[j])
					k++;
			}
		}
		a[k] = v[i];
		k=0;
	}
	for(i=0;i<10;i++)
		printf("\nA ordem descrescente e: %d",a[i]);
	getch();
}

//Crescente: if a[1]>a[2] ; c++; if a[1]>a[2] c++; a[c] = a[1];
