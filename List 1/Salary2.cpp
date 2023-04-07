#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{
    
    float workHours, minimumWage;
    
    printf("Type the worked hours:\n");
    scanf("%f",&workHours);
    printf("Type the minimum wage:\n");
    scanf("%f",&minimumWage);
    printf("The recieved salary is: %.2f", (workHours / 2 * workHours) - ( minimumWage / 2 * minimumWage * 3 / 100));
    getch();

}
