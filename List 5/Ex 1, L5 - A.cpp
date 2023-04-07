#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

main(){
	int i, a[9], j, c;
	
	system("color f0");
	for(i=0;i<9;i++){
		printf("Digite um numero:\t");
		scanf("%d",&a[i]);
		system("cls");
	}
	for(i=0;i<9;i++){
		c=0;
		for(j=1;j<=a[i];j++){
			if(a[i]%j==0)
				c++;
		}
		if(c==2)
			printf("\n\nO numero %d esta na posicao %d e e primo",a[i],i+1);
	}
	getch();
	return 0;
}