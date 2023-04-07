#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{
	float numero1, numero2;

	printf("Digite dois nuemros\n");
	scanf("%f%f",&numero1,&numero2);
	if(numero1>numero2)
		printf("O primeiro e o maior");
	else
		printf("O segundo e o maior");
		
	getch();
}
