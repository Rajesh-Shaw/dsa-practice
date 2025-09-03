/*
C Language
Assignment-6: More on Operators in C Language
1. Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.
2. Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
3. What will be the value stored in the variable x after executing following statement:
x=10>8>4;
4. What will be the value stored in the variable x after executing following statement:
x=12>-2;
5. What will be the value stored in the variable x after executing following statement:
x=3<0&&5>0;
*/


/*
1. Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.

#include<stdio.h>
int main()
{
    double usd=0, inr = 84.23, amt=0;
    printf("Enter the amount : ");
    scanf("%lf",&amt);
    usd=amt/inr;
    printf("USD Value is : %.2lf USD",usd);
    return 0;
}
*/


/*
2. Write a program to take a three digit number from the user and rotate its digits by one position towards the right.

#include<stdio.h>
int main()
{
    int num,r;
    printf("Enter a three digit Number : ");
    scanf("%d",&num);
    r= num % 10;
    num = num /10;
    num = (r*100) + num;
    printf("Result is %d.",num);
    return 0;
}
*/

/*
3. What will be the value stored in the variable x after executing following statement:
x=10>8>4;

asn:
    x=10>8>4;
    x=1>4;
    x=0;

#include<stdio.h>
int main()
{
    int x;
    x=10>8>4;
    printf("Result is %d.",x);
    return 0;
}
*/


/*
4. What will be the value stored in the variable x after executing following statement:
x=12>-2;

ans :
    x=12>-2;
    x=1;

#include<stdio.h>
int main()
{
    int x;
    x=12>-2;
    printf("Result is %d.",x);
    return 0;
}
*/


/*
5. What will be the value stored in the variable x after executing following statement:
x=3<0&&5>0;

ans:
    x=3<0&&5>0;
    x=0 && 1;
    x=0;
*/
#include<stdio.h>
int main()
{
    int x;
    x=3<0&&5>0;
    printf("Result is %d.",x);
    return 0;
}

