#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void tempo(int a){
	int hr, min, minx, seg;
	
	hr = a/3600;
	minx = a%3600;
	min = minx/60;
	seg = minx%60;
	system("color f0");
	printf("%d horas %d minutos e %d segundos",hr,min,seg);
}

int main(){
	int t;
	
	system("color f0");
	printf("Digite o tempo em segundos:\t");
	scanf("%d",&t);
	system("cls");
	tempo(t);
	getch();
	return 0;
}
