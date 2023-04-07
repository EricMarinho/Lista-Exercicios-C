#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
main()
{
    float height, base;
    printf("Type the height value:\n");
    scanf("%f",&height);
    printf("Type the base value:\n");
    scanf("%f",& base);
    printf("The area of the triangle is:%.2f",height*base/2);
    getch();
}
