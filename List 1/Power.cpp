#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{
    float number, power;

    printf("Type the number:\n");
    scanf("%f",&number);
    printf("Type the power:\n");
    scanf("%f",&power);
    printf("The power value: %.2f",powf(number,power));
    getch();
}