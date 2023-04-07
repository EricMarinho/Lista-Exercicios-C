#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

main(){
	int i, s=0;

	system("color f0");
	for(i=1;i<=200;i++){
		if(i%2!=0)
			s = s + i;
	}
	printf("%d",s);
	getch();
}