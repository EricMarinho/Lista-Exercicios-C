#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main(){
	int i, n, z, k;
	
	system("color f0");
	printf("Tabuada de 1\tTabuada de 2\tTabuada de 3\tTabuada de 4\tTabuada de 5\t\n");
	for(i=1; i<=10; i++){
		for(n=1; n<=5; n++)
			printf("%d x %d = %d\t",n,i,n*i);
	}

	printf("\n\nTabuada de 6\tTabuada de 7\tTabuada de 8\tTabuada de 9\tTabuada de 10\t\n");
	for(z=1; z<=10; z++){
		for(k=6; k<=10; k++)
			printf("%d x %d = %d\t",k,z,k*z);
	}
	
	getch();
}
