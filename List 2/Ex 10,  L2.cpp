#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{
	int dia1, dia2, mes1, mes2, ano1, ano2;
	
	printf("Digite a primeira data: dd/mm/aa\n");
	scanf("%d%d%d",&dia1,&mes1,&ano1);
	system("cls");
	printf("Digite a segunda data: dd/mm/aa\n");
	scanf("%d%d%d",&dia2,&mes2,&ano2);
	system("cls");
	
	if(ano1>ano2||ano1==ano2&&mes1>mes2||ano1==ano2&&mes1==mes2&&dia1>dia2)
		printf("A primeira data e mais atual: %d/%d/%d",dia1,mes1,ano1);
	else if(ano1==ano2&&mes1==mes2&&dia1==dia2)
		printf("As datas sao iguais: %d/%d/%d",dia1,mes1,ano1);
	else
		printf("A segunda data e mais atual: %d/%d/%d",dia2,mes2,ano2);

	getch();
}
