#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	int v[8], i, j, k=0, aux=0;
	
	system("color f0");
	for(i=0;i<8;i++){
		printf("\nDigite um valor para o vetor:\t");
		scanf("%d",&v[i]);
		if(i!=0){
			for(j=i;j>0;j--){
				k = j - 1;
				if(v[j]<v[k]){
					aux = v[k];
					v[k] = v[j];
					v[j] = aux;
				}
			}
		}
	}
	for(i=0;i<8;i++)
		printf("\n%d\n",v[i]);
	getch();
}
