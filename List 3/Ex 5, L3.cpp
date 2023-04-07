#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

main(){
	int i=0, n, z=1;
	
	system("color f0");
	printf("0 1 ");
	while(n>0 && n<100){
		n=z;
		z+=i;
		i=n;
		printf("%d ",z);
	}
	getch();
}
