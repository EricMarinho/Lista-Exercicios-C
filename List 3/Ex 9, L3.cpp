#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>

main(){
	int q=0;
	float ma, me, n;

	system("color f0");
	do{
		printf("Digite o valor:\n");
		scanf("%f",&n);
		system("cls");
		if(n<0)
			break;
		else{
			if(q==0){
				ma = n;
				me = n;
			}
			else{
				if(n>=ma)
					ma = n;
				if(n<=me)
					me = n;
			}
		q++;
		}
	}while(n>=0);
	printf("O maior n�mero e: %.2f e o menor e: %.2f",ma,me);
	getch();
}
