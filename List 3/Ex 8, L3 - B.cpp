#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>

main(){
	int n, q=0;
	float s=0, j, m, sp=0, i;
	
	system("color f0");
	do{
		printf("Digite o valor:\n");
		scanf("%d",&n);
		system("cls");
		if(n>3000)
			break;
		else{
			s += n;
			if(q==0){
				j = n;
				m = n;
			}
			else{
				if(n>=j)
					j = n;
				else
					m = n;
			}
			q++;
			if(n%2==0)
				sp += n;
			else
				i++;
		}
	}while(n<=3000);
	printf("a) Soma = %.2f\nb) Qnt. N�meros Digitados = %d\nc) Media = %.2f\nd) Maior Num = %.2f\ne) Menor Num = %.2f\nf) Media dos Pares = %.2f\ng) Percentagem de impares digitados = %.2f",s,q,s/q,j,m,sp/(q-i),(i*100)/q);
	getch();
}
