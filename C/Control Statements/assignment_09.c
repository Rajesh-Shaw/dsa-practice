/*
C Language
Assignment-9: Decision Control Statements
1. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
2. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
3. Write a program to check whether a given alphabet is in uppercase or lowercase.
4. Write a program to check whether a given number is divisible by 3 and divisible by 2.
5. Write a program to check whether a given number is divisible by 7 or divisible by 3.
*/

/*
1. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.


#include<stdio.h>
int main()
{
    float cp=0, sp=0, result=0;
    printf("Enter Cost Price of the product : ");
    scanf("%f",&cp);
    printf("Enter Selling Price of the product : ");
    scanf("%f",&sp);

    result = ( (sp-cp)/cp ) *100.00 ;

    if(sp>=cp)
        printf("Profit Percentage is %.2f",-result);
    else
        printf("Loss Percentage is %.2f",-result);


    return 0;
}

*/



/*
2. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.


#include<stdio.h>
int main()
{
    float s1=0, s2=0, s3=0, s4=0, s5=0, result=0;
    printf("Enter 5 subjects marks : ");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);

    result = (s1+s2+s3+s4+s5)/5.0 ;

    if(result >= 33)
        printf("Candidate passed the examination With %.2f%%",result);
    else
        printf("Candidate failed the examination With %.2f%%",result);


    return 0;
}
*/


/*
3. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a alphabet : ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("Given alphabet '%c' is in uppercase",ch);
    else if(ch >= 'a' && ch <='z')
        printf("Given alphabet '%c' is in lowercase",ch);
    else
        printf("Given alphabet '%c' is not an alphabet",ch);

    return 0;
}
*/


/*
4. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a alphabet : ");
    scanf("%d",&num);

    if(num%2==0 && num%3==0)
        printf("Given number '%d' is divisible by 3 and divisible by 2",num);
    else
        printf("Given number '%d' is not divisible by 3 and divisible by 2",num);

    return 0;
}
*/

/*
5. Write a program to check whether a given number is divisible by 7 or divisible by 3.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num%7==0 && num%3==0)
        printf("Given number '%d' is divisible by 7 and divisible by 3",num);
    else if(num%7==0)
        printf("Given number '%d' is divisible by 7",num);
    else if(num%3==0)
        printf("Given number '%d' is divisible by 3",num);
    else
        printf("Given number '%d' is not divisible by 7 and not divisible by 3",num);

    return 0;
}