#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>

main(){
	int n, k, y, imp=0;
	float a[y],s=0,ma,me,sp=0,impp;

	system("color f0");
	printf("Digite a quantidade de numeros que ira utilizar nas operacoes: \n");
	scanf("%d",&n);
	system("cls");
	for(y=1;y<=n;y++){
		printf("Digite o valor:\n");
		scanf("%f",&a[y]);
		system("cls");
	}
	for(y=1;y<=n;y++){
		s += a[y];
		if(y==1){
			ma = a[y];
			me = a[y];
		}
	if(ma>=a[y])
		ma = ma;
	else
		ma = a[y];
	if(me<=a[y])
		me = me;
	else
		me = a[y];
	}
	for(y=1;y<=n;y++){
		k = a[y];
		if(k%2==0)
			sp += k;
		else
			sp += 0;
		if(k%2!=0)
			imp++;
	}
	impp = (imp*100)/n;
	printf("a) Soma = %.2f\nb) Qnt. N�meros Digitados = %d\nc) Media = %.2f\nd) Maior Num = %.2f\ne) Menor Num = %.2f\nf) Media dos Pares = %.2f\ng) Percentagem de impares digitados = %.2f",s,n,s/n,ma,me,sp/2,impp);
	getch();
}
