#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>

float peso(char op, float peso){
	
	switch(op){
		case 'f':
			return((72.7*peso)-58);
			break;
		case 'm':
			return((62.1*peso)-44.7);
			break;			
	}
}

int main(){
	float peso;
	char op;
	
	system("color f0");
	printf("(f para Feminino e m para Masculino)\nDigite o seu sexo e depois sua altura:\t");
	scanf("%c %f",&op,&peso);
	printf("\n\nO seu peso ideal e: %.2f",peso(op,peso));
	getch();
	return 0;
}
