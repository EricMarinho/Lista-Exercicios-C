#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{
    float salary, fee;

    printf("Type the salary:\n");
    scanf("%f",&salary);
    printf("The salary will be $%.2f", salary - (salary * fee / (100 + 50)));
    getch();
}