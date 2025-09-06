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

*/

/*
2. Write a menu driven program with the following options:
    1. Addition
    2. Subtraction
    3. Multiplication
    4. Division
    5. Exit
    



#include<stdio.h>
int main()
{
    int choose=0,a=0,b=0;
    while(1)
    {
        printf("\n\n===== MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("=================\n");

        printf("Enter Your Choice : ");
        scanf("%d",&choose);

        if(choose==5)
        {
            printf("Exiting program... Bye Bye :)\n");
            break;
        }

        printf("Enter two Number :");
        scanf("%d%d",&a,&b);

        switch(choose)
        {
            case 1: 
                printf("Result: %d + %d = %d\n", a, b, a+b);
                break;
            case 2: 
                printf("Result: %d - %d = %d\n", a, b, a-b); 
                break;
            case 3: 
                printf("Result: %d * %d = %d\n", a, b, a*b);
                break;
            case 4: 
                if(b != 0)
                     printf("Result: %d / %d = %.2f\n", a, b, (float)a/b);
                else
                    printf("Error! Division by zero is not allowed.\n");
                break;
            default: 
                printf("Invalid choice! Please select between 1 and 5.\n");
                
        }

    
    }
    return 0;
}

*/



/*
3. Write a program which takes the day number of a week and displays a unique greeting message for the day.
*/

#include<stdio.h>
int main()
{
    int day;
    printf("Enter a day Number : ");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
            printf("Welcome To Monday");
            break;
        case 2:
            printf("Welcome To Tuesday");
            break;
        case 3:
            printf("Welcome To Wednesday");
            break;
        case 4:
            printf("Welcome To Thursday");
            break;
        case 5:
            printf("Welcome To Friday");
            break;
        case 6:
            printf("Welcome To Saturday");
            break;
        case 7:
            printf("Welcome To Sunday");
            break;
        default :
            printf("Invalid Day Number!");
    }
    return 0;
}



/*
4. Write a menu driven program with the following options:
    1. Check whether a given set of three numbers are lengths of an isosceles triangle or not
    2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
    3. Check whether a given set of three numbers are equilateral triangle or not
    4. Exit



#include<stdio.h>
int main()
{
    int n=0,a=0,b=0,c=0;
    while(1)
    {
        printf("\n\n=========Menu=========\n");
        printf("1. Check Isosceles triangle\n");
        printf("2. Check Right angled triangle\n");
        printf("3. Check Equilateral triangle\n");
        printf("4. Exit\n");
        printf("==================\n");

        printf("Enter Your Choice : \n");
        scanf("%d",&n);

        if(n==4)
        {
            printf("Existing Program.............Bye :)");
            break;
        }
        else
        {

            printf("Enter The all 3 side of triangle : \n");
            scanf("%d%d%d",&a,&b,&c);

            switch(n)
            {
                case 1:
                    if(a==b || b==c || c==a)
                        printf("This is an Isosceles triangle");
                    else
                        printf("This is not an Isosceles triangle");
                    break;
                
                case 2:
                    if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
                        printf("This is a Right angled triangle");
                    else
                        printf("This is not a Right angled triangle");
                    break;
                
                case 3:
                    if(a==b && b==c)
                        printf("This is an Equilateral triangle");
                    else
                        printf("This is not an Equilateral triangle");
                    break;
                
                default :
                    printf("Please Enter a valid choise.");
                    
            }
        }


    }
}
*/



/*

5. Convert the following if-else-if construct into switch case:
    if(var == 1)
    printf("good");
    else if(var == 2)
    printf("better");
    else if(var == 3)


#include<stdio.h>
int main()
{
    int var=0;
    printf("Enter a Nubmer : ");
    scanf("%d",&var);

    switch(var)
    {
        case 1:
            printf("Good");
            break;
        case 2:
            printf("Better");
            break;
        case 3:
            printf("Best");
            break;
        default :
            printf("Please Enter number between 1 to 3.");

    }
}


*/