#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.1415

main(){
	int i,j,aux,y;
	float x,s=1,f,cx,n;
	
	system("color f0");
	printf("De o valor de x: \n");
	scanf("%f",&x);
	system("cls");
	x = (x*pi)/180;
	for(i=1;i<=8;i++){
		aux=i%2;
		if(aux==0){
			y = i;
			f = 1;
			for(j=y;j>1;j--)
				f*=j;
			n = pow(x,y);
			if(y%4==0)
				s += n/f;
			else
				s = s - n/f;
		}
	}
	cx = cos(x);
	printf("O valor do cosx e: %f e a soma: %f",cx,s);
	getch();
}
