#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{
    float number;
    
    printf("Type the number:\n");
    scanf("%f",&number);
    printf("The square of this number is: %.2f\nThe cube of this number is: %.2f\nThe square root of this number is: %.2f\nThe cubic root of this number is: %.2f" ,powf(number,2.0),powf(number,3.0),powf(number,1.0/2.0),pow(number,1.0/3.0));
    getch();
}
