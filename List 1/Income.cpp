#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{
    float depositedMoney, fees;
    
    printf("Type the deposited money:\n");
    scanf("%f",&depositedMoney);
    printf("Type the fee values:\n");
    scanf("%f",&fees);
    printf("The income is R$%.2f and the total is R$%.2f",depositedMoney*fees/100,depositedMoney+depositedMoney*fees/100);
    getch();

}
