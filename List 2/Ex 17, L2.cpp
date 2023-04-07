#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{
	float a, b, c, delta;

	printf("Digite o valor de a:\n");
	scanf("%f",&a);
	system("cls");
	printf("Digite o valor de b:\n");
	scanf("%f",&b);
	system("cls");
	printf("Digite o valor de c:\n");
	scanf("%f",&c);
	system("cls");
	delta = powf(b,2) - (4*a*c);

	if(delta<0)
		printf("Nao existe raiz real");
	else if(delta==0)
		printf("A raiz e x = %.2f",-b/2*a);
	else
		printf("As raizes sao x1r = %.2f e x2 = %.2f",(-b+powf(delta,2))/(2*a),(-b-pow(delta,2))/(2*a));
	
	getch();
}
