/*
C Language
Assignment-28: More on Recursion
1. Write a recursive function to calculate factorial of a given number
2. Write a recursive function to calculate HCF of two numbers
3. Write a recursive function to print first N terms of Fibonacci series
4. Write a program in C to count the digits of a given number using recursion.
5. Write a program in C to calculate the power of any number using recursion.
*/



#include<stdio.h>
int factorial(int n);
int hcf(int a, int b);
void printFibonacciSeries(int n);
int fibonacci(int n);
int count_digits_of_number(int n);
int power(int n, int p);


int main()
{
    int n=0,result=0,p=0;
    // printf("Enter a number : ");
    // scanf("%d",&n);
    // result = factorial(n);
    // printf("%d",result);

    // printFibonacciSeries(n);

    printf("Enter a number , and power: ");
    scanf("%d%d",&n,&p);
    result = power(n,p);
    printf("%d",result);
   
    return 0;
}


/*
1. Write a recursive function to calculate factorial of a given number

n=5
1) f(n)         5*4*3*2*1   ==  n*(n-1)*....*1
2) n * f(n-1)
3) n==1

*/
int factorial(int n)
{
    if(n==1)
        return n;
    return n * factorial(n-1);
}




/*
2. Write a recursive function to calculate HCF of two numbers
a=5, b=10
1) f(a,b)           5,10    =   10,5    = 5
2) f(b, a%b)
3) n==0

*/
int hcf(int a, int b)
{
    if(b==0)
        return a;
    return hcf(b, a % b);
}


/*
3. Write a recursive function to print first N terms of Fibonacci series

n=6
1) f(n)         0 1 1 2 3 5 8 ....
2) f(n-1)  (n-1)+(n-2)
3) n==1

*/

void printFibonacciSeries(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fibonacci(i));
    }
}

int fibonacci(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}





/*
4. Write a program in C to count the digits of a given number using recursion.


n=512
1) f(n)         512 ===== 3
2) 1 + f(n/10)
3) n==0

*/
int count_digits_of_number(int n)
{
    if (n == 0)
        return 1;   // special case: 0 has 1 digit

    if (n < 10)
        return 1;   // base case: single digit number

    return  1 + count_digits_of_number(n/10);;
}




/*
5. Write a program in C to calculate the power of any number using recursion.

n=5,p=3
1) f(n,p)          5*5*5
2) n * f(n,p-1)
3)p==1

*/
int power(int n, int p)
{
    if(p==0)
        return 1;
    return n * power(n,p-1);
}

