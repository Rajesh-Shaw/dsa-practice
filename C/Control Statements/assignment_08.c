/*
C Language
Assignment-8: Decision Control Statements
1. Write a program to check whether a given number is a three digit number or not.
2. Write a program to print greater between two numbers. Print one number if both are the same.
3. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
4. Write a program to check whether a given year is a leap year or not.
5. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
*/

/*
1. Write a program to check whether a given number is a three digit number or not.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a three Digit Number :");
    scanf("%d",&n);

    if( (n >= 100 && n <= 999) || (n <= -100 && n >= -999) )
        printf("Given Number %d is a three digit number.",n);
    else
        printf("Given Number %d is not a three digit number.",n);
    
    return 0;
}
*/


/*
2. Write a program to print greater between two numbers. Print one number if both are the same.

#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two Numbers :");
    scanf("%d%d",&n1,&n2);

    if(n1>=n2)
        printf("Greater Number is %d.",n1);
    else
        printf("Greater Number is %d.",n2);
    
    return 0;
}
*/

/*
3. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter tquadratic equation a,b and c values :");
    scanf("%d%d%d",&a,&b,&c);

    d= b*b - 4*a*c;

    if(d > 0 )
        printf("The roots of a given quadratic equation are real & distinct.");
    else if( d == 0)
        printf("The roots of a given quadratic equation are real & equal.");
    else
        printf("The roots of a given quadratic equation are imaginary.");
    
    return 0;
}
*/

/*
4. Write a program to check whether a given year is a leap year or not.


#include<stdio.h>
int main()
{
    int y;
    printf("Enter the Year :");
    scanf("%d",&y);

    if( (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0) )
        printf("Given year %d is a leap year.",y);
    else
        printf("Given year %d is not a leap year.",y);
    
    return 0;
}
*/


/*
5. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
*/

#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter two Numbers :");
    scanf("%d%d%d",&n1,&n2,&n3);

    if( n1>=n2 && n1>= n3)
        printf("Greater Number is %d.",n1);
    else if(n2>=n3)
        printf("Greater Number is %d.",n2);
    else
        printf("Greater Number is %d.",n3);
    
    return 0;
}