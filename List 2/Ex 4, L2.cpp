#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{
	float n1, n2, n3;

	printf("Digite tres nuemros\n");
	scanf("%f%f%f",&n1,&n2,&n3);
	if(n1>n2&&n2>n3)
		printf("A ordem crescente e %.0f,%.0f,%.0f",n3,n2,n1);
	else if(n1>n3&&n3>n2)
		printf("A ordem crescente e %.0f,%.0f,%.0f",n2,n3,n1);
	else if(n2>n1&&n1>n3)
		printf("A ordem crescente e %.0f,%.0f,%.0f",n3,n1,n2);
	else if(n2>n3&&n3>n1)
		printf("A ordem crescente e %.0f,%.0f,%.0f",n1,n3,n2);
	else if(n3>n1&&n1>n2)
		printf("A ordem crescente e %.0f,%.0f,%.0f",n2,n1,n3);
	else
		printf("A ordem crescente e %.0f,%.0f,%.0f",n1,n2,n3);
	
	getch();
}
