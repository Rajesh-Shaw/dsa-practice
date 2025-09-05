/*
C Language
Assignment-20: switch case control
1. Write a program to find and display grade obtained by a student in a test. Grading specifications are as follows:
    Marks from 90 to 100:
    Grade A
    Marks from 80 to less than 90: Grade B
    Marks from 70 to less than 80: Grade C
    Marks from 60 to less than 70: Grade D
    Marks from 50 to less than 60: Grade E
    Marks below 50: Grade F
    Marks greater than 100 or less than 0: Invalid Marks

2. Write a menu driven program with the following options:
    1. Factorial of a number
    2. Check Even and Odd
    3. Area of circle
    4. Sum of first N natural numbers.
    5. Exit

3. Write a program to check whether a given character is uppercase alphabet or lower case alphabet or some other special character, using switch case statement.

4. Write a program to check whether a given character is vowel or consonant or some other special character, using switch case statement.

5. Write a menu driven program with the following options:
    1. Calculate LCM of two numbers
    2. Calculate sum of the digits of a number
    3. Volume of a cuboid
    4. Check whether a given number is Prime or not
    5. Exit

*/


/*
switch case control
1. Write a program to find and display grade obtained by a student in a test. Grading specifications are as follows:
    Marks from 90 to 100:
    Grade A
    Marks from 80 to less than 90: Grade B
    Marks from 70 to less than 80: Grade C
    Marks from 60 to less than 70: Grade D
    Marks from 50 to less than 60: Grade E
    Marks below 50: Grade F
    Marks greater than 100 or less than 0: Invalid Marks
*/

#include<stdio.h>
int main()
{
    int m;
    printf("Enter Marks : ");
    scanf("%d",&m);

    if(m < 0 || m > 100)
    {
        printf("Invalid Marks! Please Enter Valid Marks");
    }
    else
    {
        switch(m/10)
        {
            case 10 :
            case 9  :
                printf("Grade A");
                break;
            case 8 :
                printf("Grade B");
                break;
            case 7 :
                printf("Grade C");
                break;
            case 6 :
                printf("Grade D");
                break;
            case 5 :
                printf("Grade E");
                break;
            default:
                printf("Grade F");
        }
    }
    return 0;
}



/*
2. Write a menu driven program with the following options:
    1. Factorial of a number
    2. Check Even and Odd
    3. Area of circle
    4. Sum of first N natural numbers.
    5. Exit
*/


/*
3. Write a program to check whether a given character is uppercase alphabet or lower case alphabet or some other special character, using switch case statement.

*/


/*
4. Write a program to check whether a given character is vowel or consonant or some other special character, using switch case statement.

*/


/*
5. Write a menu driven program with the following options:
    1. Calculate LCM of two numbers
    2. Calculate sum of the digits of a number
    3. Volume of a cuboid
    4. Check whether a given number is Prime or not
    5. Exit

*/