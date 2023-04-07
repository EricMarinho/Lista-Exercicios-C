#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{
    float salary, firstWithdraw, secondWithdraw, fees=38;
    
    printf("Type the salary:\n");
    scanf("%f",&salary);
    printf("Type the value of the first withdraw\n");
    scanf("%f",&firstWithdraw);
    printf("Type the value of the second withdraw\n");
    scanf("%f",&secondWithdraw);
    printf("The current balance is $%f:", salary - (firstWithdraw - (firstWithdraw * (fees/10000))) - (secondWithdraw - (secondWithdraw * (fees/10000))));
    getch();
}
