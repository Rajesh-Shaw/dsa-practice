/*
C Language
Assignment-19: switch case control
1. Write a program which takes the month number as an input and display number of days in that month.

2. Write a menu driven program with the following options:
    1. Addition
    2. Subtraction
    3. Multiplication
    4. Division
    5. Exit
    
3. Write a program which takes the day number of a week and displays a unique greeting message for the day.

4. Write a menu driven program with the following options:
    1. Check whether a given set of three numbers are lengths of an isosceles triangle or not
    2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
    3. Check whether a given set of three numbers are equilateral triangle or not
    4. Exit

5. Convert the following if-else-if construct into switch case:
    if(var == 1)
    printf("good");
    else if(var == 2)
    printf("better");
    else if(var == 3)

*/


/*
1. Write a program which takes the month number as an input and display number of days in that month.

*/
#include<stdio.h>
int main()
{
    int m;
    printf("Enter Month Number : ");
    scanf("%d",&m);

    switch(m)
    {
        case 2:
            printf("This Month Has 28/29 Days.");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("This Month Has 30 Days.");
            break;
        case 1: 
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("This Month Has 31 Days.");
            break;
        default:
            printf("Please Enter the number between 1-12.");
    }

    return 0;
}



/*
2. Write a menu driven program with the following options:
    1. Addition
    2. Subtraction
    3. Multiplication
    4. Division
    5. Exit
    

*/

/*
3. Write a program which takes the day number of a week and displays a unique greeting message for the day.

*/

/*
4. Write a menu driven program with the following options:
    1. Check whether a given set of three numbers are lengths of an isosceles triangle or not
    2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
    3. Check whether a given set of three numbers are equilateral triangle or not
    4. Exit

*/


/*

5. Convert the following if-else-if construct into switch case:
    if(var == 1)
    printf("good");
    else if(var == 2)
    printf("better");
    else if(var == 3)

*/