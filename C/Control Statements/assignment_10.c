/*
C Language
Assignment-10: More on Decision Control Statements
1. Write a program to check whether a given number is positive, negative or zero.
2. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
3. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
4. Write a program which takes the month number as an input and display number of days in that month.
*/

/*
1. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main()
{
    int num=0;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num>0)
        printf("Given number %d is positive number",num);
    else if(num<0)
        printf("Given number %d is negative number",num);
    else    
        printf("Given number %d is zero",num);

    return 0;
}
*/

/*
2. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.


#include<stdio.h>
int main()
{
    int ch=0;
    printf("Enter a character : ");
    scanf(" %c",&ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("The given character %c is an alphabet (uppercase).",ch);
    else if(ch >= 'a' && ch <= 'z')
        printf("The given character %c is an alphabet (lowercase).",ch);
    else if(ch >= '0' && ch <= '9')
        printf("The given character %c is a digit.",ch);
    else    
        printf("The given character %c is a special character.",ch);        

    return 0;
}
*/


/*
3. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter the length of the sides of a triangle : ");
    scanf("%d%d%d",&s1,&s2,&s3);

    if(s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1)
        printf("The triangle is valid");
    else    
        printf("The triangle is not valid");

    return 0;
}

*/

/*
4. Write a program which takes the month number as an input and display number of days in that month.

*/
#include<stdio.h>
int main()
{
    int m;
    printf("Enter the month number: ");
    scanf("%d",&m);

    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 )
        printf("Number of days 31");
    else if(m==2)
        printf("Number of days 28 or 29");
    else if(m==4 || m==6 || m==9 || m==11) 
        printf("Number of days 30");
    else    
        printf("Invalid Number please enter between 1-12");

    return 0;
}

