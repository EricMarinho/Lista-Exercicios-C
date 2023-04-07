#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{
    float rationQuantity, catQuantity;
    
    printf("Type the quantity of ration using kilograms:\n");
    scanf("%f",&rationQuantity);
    printf("Type the quantity of ration given to each cat in grams:\n");
    scanf("%f",&catQuantity);
    printf("There will be %.0f quilogram of ration after five days.",rationQuantity-catQuantity*2*5/1000);
    getch();
}