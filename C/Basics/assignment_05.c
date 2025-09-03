
/*
C Language
Assignment-5: More on Operators in C Language
1. Write a program to input a three digit number and display the sum of the digits.
2. Write a program to find ASCII code of the character '+'.
3. Write a program to print size of an int, a float, a char and a double type variable
4. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)
5. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit-9 then the resulting number is 2349)
*/

/*
1. Write a program to input a three digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int n=0,num=0,r=0,sum=0;
    printf("Enter a 3 Digit Number :");
    scanf("%d",&n);
    num=n;
    
    r=num%10;
    sum=sum+r;
    num=num/10;

    r=num%10;
    sum=sum+r;
    num=num/10;

    r=num%10;
    sum=sum+r;

    printf("Sum of Digit of 3 Digit Number %d is %d",n,sum);

    return 0;
}
*/

/*
2. Write a program to find ASCII code of the character '+'.


#include<stdio.h>
int main()
{
    printf("ASCII code of the character '+' is %d",'+');
    return 0;
}

*/



/*
3. Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("size of an int %zu Bytes\n",sizeof(a));
    printf("size of a float %zu Bytes\n",sizeof(b));
    printf("size of a char %zu Byte\n",sizeof(c) );
    printf("size of a double %zu Bytes\n",sizeof(d) );

    return 0;
}
*/


/*
4. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)

#include<stdio.h>
int main()
{
    int x=2345;
    x= x- (x%10);
    printf("Result is %d",x);
    return 0;
}
*/


/*
5. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit-9 then the resulting number is 2349)

*/
#include<stdio.h>
int main()
{
    int n=0,d=0;
    printf("Enter a Number :");
    scanf("%d",&n);
    printf("Enter a Digit :");
    scanf("%d",&d);

    printf("Result is %d",n*10+d);
    return 0;
}