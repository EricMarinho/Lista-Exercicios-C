#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>

main(){

	float ladoAzulejo, alturaAzulejo, ladoParede, alturaParede, areaAzulejo, areaParede, quantidadeAzulejo;
	
	system("color f0");
	printf("Lado do Azulejo em metros:\n");
	scanf("%f",&ladoAzulejo);
	system("cls");
	printf("Altura do Azulejo em metros:\n");
	scanf("%f",&alturaAzulejo);
	system("cls");
	printf("Lado da Parede em metros:\n");
	scanf("%f",&ladoParede);
	system("cls");
	printf("Altura da Parede em metros:\n");
	scanf("%f",&alturaParede);
	system("cls");
	areaAzulejo = alturaAzulejo*ladoAzulejo;
	areaParede = alturaParede*ladoParede;
	quantidadeAzulejo = areaParede/areaAzulejo;
	printf("O numero de azulejos que ele vai usar e: %.f",ceil(quantidadeAzulejo));
	getch();
}
