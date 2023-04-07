#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	int i, j;
	
	system("color f0");
	for(i=9;i>=1;i--){
		for(j=i;j>=1;j--)
			printf("%d ",j);
		printf("\n");
	}
	
	getch();
}