#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>

float media(float a, float b, float c, char op){
	
	switch(op){
		case 'a':
			return ((a+b+c)/3);
			break;
		case 'p':
			return (((5*a)+(3*b)+(2*c))/10);
			break;
	}
}


int main(){
	float a, b, c;
	char op;
	
	system("color f0");
	printf("(a = para media aritm�tica, p = para media ponderada)\nDigite as 3 notas e a letra:\t");
	scanf("%f %f %f %c",&a,&b,&c,&op);
	
	switch(op){

		case 'a':
			printf("A media aritmetica e: %.2f",media(a,b,c,op));
			break;
		
		case 'p':
			printf("A media ponderada e: %.2f",media(a,b,c,op));
			break;

		default:
			printf("Opcao invalida!");
			break;
	}

	getch();
	return 0;
}
