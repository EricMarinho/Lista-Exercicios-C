#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

main(){

	int anoAtual, i;
	float salario=1000, aumento=1.5/100;
	
	system("color f0");
	printf("Digite o ano atual:\n");
	scanf("%d",&anoAtual);
	system("cls");
	for(i=2006;i<=anoAtual;i++){
		if(i==2006)
			printf("O salario e %.2f e o percentual de aumento e de %.2f.\n\n",salario+(salario*aumento),aumento*100);
		else{
			aumento *= 2;
			salario += (salario*aumento);
			printf("O salario e %.2f e o percentual de aumento e de %.2f.\n\n",salario,aumento*100);}
			Beep(2000,250);
			_sleep(500);
	}
	getch();
}
