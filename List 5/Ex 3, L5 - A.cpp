#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
main(){
	int a[10], b[10], vg=0, maiora=0, c, i;
	float com;
	
	system("color f0");
	for(i=0;i<=9;i++){
		printf("Digite a quantidade vendida e o preco do produto:\t");
		scanf("%d%d",&a[i],&b[i]);
		system("cls");
		if(a[i]>maiora){
			maiora = a[i];
			c = i+1;
		}
	}
	for(i=0;i<=9;i++){
		printf("\nObejeto %d- %d vendidos; valor unitario = R$%d,00; valor geral= R$%d,00\n",i+1,a[i],b[i],a[i]*b[i]);
		vg = vg + (a[i]*b[i]);
	}
	com = (vg*5)/100;
	printf("\nO valor geral das vendas e de: R$%d,00 e a comissao e: R$%.2f\nO objeto mais vendido na posicao %d tem a quantidade de: %d",vg,com,c,maiora);
	getch();
	return 0;
}
