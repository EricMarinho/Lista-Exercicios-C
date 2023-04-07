#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){

    int number1, number2;

    printf("Type the first number:\n");
    scanf("%d",&number1);
    printf("Type the second number:\n");
    scanf("%d",&number2);
    system("cls");
    printf("The sum is: %d", number1+number2);
    getch();
}