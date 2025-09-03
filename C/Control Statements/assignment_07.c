/*
C Language
Assignment-7: Decision Control Statements
1. Write a program to check whether a given number is positive or non positive.
2. Write a program to check whether a given number is divisible by 5 or not
3. Write a program to check whether a given number is an even number or an odd number.
4. Write a program to check whether a given number is an even number or an odd number without using % operator.
5. Write a program to check whether the given number is even or odd using a bitwise operator.
*/



/*
1. Write a program to check whether a given number is positive or non positive.

#include<stdio.h>
int main()
{
    int x=0;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x>0)
        printf("%d is a Positive number.",x);
    else
        printf("%d is a non positive number.",x);

    return 0;
}
*/

/*
2. Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>
int main()
{
    int x=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x%5==0)
        printf("The number %d is divisible by 5.",x);
    else
        printf("The number %d is not divisible by 5.",x);

    return 0;
}
*/


/*
3. Write a program to check whether a given number is an even number or an odd number.


#include<stdio.h>
int main()
{
    int x=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x%2==0 )
        printf("The number %d is an even number.",x);
    else
        printf("The number %d is an odd number.",x);

    return 0;
}

*/

/*
4. Write a program to check whether a given number is an even number or an odd number without using % operator.

#include<stdio.h>
int main()
{
    int x=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x == (x/2)*2 )
        printf("The number %d is an even number.",x);
    else
        printf("The number %d is an odd number.",x);

    return 0;
}
*/



/*
5. Write a program to check whether the given number is even or odd using a bitwise operator.
*/
#include<stdio.h>
int main()
{
    int x=0;
    printf("Enter a number : ");
    scanf("%d",&x);


    if(x == (x>>1)<<1 )
        printf("The number %d is an even number.",x);
    else
        printf("The number %d is an odd number.",x);


    // if(x & 1)
    //     printf("%d is odd", x);
    // else
    //     printf("%d is even", x);


    return 0;
}