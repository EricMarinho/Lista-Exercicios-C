#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

main()
{
    int laboratoryNote, semestralNote, finalExamNote, meanNote;

    printf("Type the laboratory exam grade:\n");
    scanf("%d",&laboratoryNote);
    system("cls");
    printf("Type the semestral exam grade:\n");
    scanf("%d",&nsemestralNote);
    system("cls");
    printf("Type the final exam grade:\n");
    scanf("%d",&finalExamNote);
    system("cls");
    meanNote = ((laboratoryNote*2) + (semestralNote*3) + (finalExamNote*5)) / (10);
    
    if(meanNote >= 8)
        printf("The grade is: A");
    else if(meanNote>=7)
        printf("The grade is: B");
    else if(meanNote>=6)
        printf("The grade is: C");
    else if(meanNote>=5)
        printf("The grade is: D");
    else
        printf("The grade is: E");
    getch();
}
