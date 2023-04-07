#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main(){
	int i, num;
	
	system("color f0");
	printf("Base da tabuada:\n");
	scanf("%d",&num);
	printf("\nTabuada do %d\n\n",num);
	for(i=1; i<=9; i++)
		printf("%d x %d = %d\n",num,i,num*i);
	getch();
}
