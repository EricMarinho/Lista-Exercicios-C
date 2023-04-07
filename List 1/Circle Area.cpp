#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
    float radius;

    printf("Type the radius:\n");
    scanf("%f",&radius);
    printf("The area of the circle is :%.2f",3.14*pow(radius,2.0));
    getch();
}
