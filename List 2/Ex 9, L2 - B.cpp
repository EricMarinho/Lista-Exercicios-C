#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

main()
{
	struct tm *loc;
	time_t t;
	t= time(NULL);
	loc=localtime(&t);
	int dia, mes, ano1, ano2, hr, min;
	dia=loc->tm_mday;
	mes=loc->tm_mon + 1;
	ano1=loc->tm_year;
	ano2= ano1 + 1900;
	hr=loc->tm_hour;
	min=loc->tm_min;

	printf("Data atual: %d/%d/%d\n",dia,mes,ano2);
	if(mes==1)
		printf("Janeiro");
	else if(mes==2)
		printf("Fevereiro  ");
	else if(mes==3)
	 	printf("Marco  ");
	else if(mes==4)
		printf("Abril  ");
	else if(mes==5)
		printf("Maio  ");
	else if(mes==6)
	 	printf("Junho  ");
	else if(mes==7)
	 	printf("Julho  ");
	else if(mes==8)
		printf("Agosto  ");
	else if(mes==9)
		printf("Setembro  ");
	else if(mes==10)
	 	printf("Outubro  ");
	else if(mes==11)
		printf("Novembro  ");
	else
	 	printf("Dezembro  ");
	printf("-  %dhora(s):%dminuto(s)",hr,min);
	getch();
}
