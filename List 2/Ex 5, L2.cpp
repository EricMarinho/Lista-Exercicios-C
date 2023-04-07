#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{
	int n1, n2, n3, n4;

	printf("Digite tres numeros em ordem crescente\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	system("cls");
	printf("Digite um numero qualquer\n");
	scanf("%d",&n4);
	system("cls");
	
	if(n4>n3)
		printf("A ordem decrescente e %d,%d,%d,%d",n4,n3,n2,n1);
	else if(n4<n3&&n4>n2)
		printf("A ordem decrescente e %d,%d,%d,%d",n3,n4,n2,n1);
	else if(n4<n2&&n4>n1)
		printf("A ordem decrescente e %d,%d,%d,%d",n3,n2,n4,n1);
	else
		printf("A ordem decrescente e %d,%d,%d,%d",n3,n2,n1,n4);
	
	getch();
}
