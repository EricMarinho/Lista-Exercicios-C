#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
main(){
	//c(vetor res.), u/i/sr(união/interseção/subtração res.), ua/b(união de a/b), k(contador)
	int a[10], b[10], c[20], ur[20], ua[10], ub[10], ir[20], sr[20], ar[10], pr[10], i, j=0, cont=0, ka=0, kb=0, ku=0, ki=0, ks=0;
	
	system("color f0");
	for(i=0;i<20;i++){
		if(i<10){
			printf("Digite um numero para o primeiro vetor:\t");
			scanf("%d",&a[i]);
			printf("\n");
			c[i] = a[i];
		}
		else{
			printf("Digite um numero para o segundo vetor:\t");
			scanf("%d",&b[j]);
			printf("\n");
			c[i] = b[j];
			j++;
		}
	}
	
	for(i=0;i<20;i++){
		for(j=19;j>i;j--){
			if(c[i]==c[j]){
				cont++;
			}
		}
		if(cont==0){
			ur[ku] = c[i];
			ku++;
		}
		else
			cont=0;
	}
	printf("Vetor uniao: { ");
	for(i=0;i<ku;i++)
		printf("%d  ",ur[i]);
	printf("}");
	
	cont = 0;
	for(i=0;i<10;i++){
		for(j=9;j>i;j--){
			if(a[i]==a[j]){
				cont++;
			}
		}
		if(cont==0){
			ua[ka] = a[i];
			ka++;
		}
		else
			cont = 0;
	}
	
	cont = 0;
	for(i=0;i<10;i++){
		for(j=9;j>i;j--){
			if(b[i]==b[j]){
				cont++;
			}
		}
		if(cont==0){
			ub[kb] = b[i];
			kb++;
		}
		else
			cont = 0;
	}
	
	cont = 0;
	for(i=0;i<ka;i++){
		for(j=0;j<kb;j++){
			if(ua[i]==ub[j])
				cont++;
		}
		if(cont==0){
			sr[ks] = ua[i];
			ks++;
		}
		else
			cont = 0;
	}
	printf("\n\nVetor subtracao de a por b: { ");
	for(i=0;i<ks;i++)
		printf("%d  ",sr[i]);
	printf("}");	
	
	for(i=0;i<10;i++)
		ar[i] = a[i] + b[i];
	printf("\n\nVetor adicao de a e b: { ");
	for(i=0;i<10;i++)
		printf("%d  ",ar[i]);
	printf("}");
	
	for(i=0;i<10;i++)
		pr[i] = a[i] * b[i];
	printf("\n\nVetor produto de a e b: { ");
	for(i=0;i<10;i++)
		printf("%d  ",pr[i]);
	printf("}");

	cont = 0;
	for(i=0;i<ka;i++){
		for(j=0;j<kb;j++){
			if(ua[i]==ub[j])
				cont++;
			if(cont!=0){
				ir[ki] = ua[i];
				ki++;
				cont = 0;
			}
		}
	}
	printf("\n\nVetor intersecao a e b: { ");
	for(i=0;i<ki;i++)
		printf("%d  ",ir[i]);
	printf("}");
	
	
	getch();
}
