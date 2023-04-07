#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{
    int birthYear, currentYear;
    
    printf("Type the year of birth:\n");
    scanf("%d",&birthYear);
    printf("Type the current year:\n");
    scanf("%d",&currentYear);
    printf("The person have %d years and by 2050 it will have %d.",currentYear-birthYear,2050-birthYear);
    getch();
}