#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	int v[5], a[10], k=0, j, i, b[5];
	
	system("color f0");
	for(i=0;i<5;i++){
		printf("\nDigite um valor para o primeiro e um para o segundo vetor:\n");
		scanf("%d%d",&v[i],&b[i]);
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
				if(v[i]>v[j]){
					if(i!=j)
						k++;
				}
				if(v[i]>b[j])
					k++;
		}
		a[k] = v[i];
		k=0;
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
				if(b[i]>b[j]){
					if(i!=j)
						k++;
				}
				if(b[i]>v[j])
					k++;
		}
		a[k] = b[i];
		k=0;
	}
	for(i=0;i<10;i++)
		printf("\nA ordem crescente e: %d",a[i]);
	getch();
}

//Crescente: if a[1]>a[2] ; c++; if a[1]>a[2] c++; a[c] = a[1];
