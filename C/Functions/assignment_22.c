/*
C Language
Assignment-22: Functions
1. Write a function to calculate the factorial of a number. (TSRS)
2. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
3. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
4. Write a function to check whether a given number contains a given digit or not.(TSRS)
5. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/


#include<stdio.h>
unsigned long long factorial(int n);
unsigned long long combinations(int n, int r);
unsigned long long arrangements(int n, int r);
int isDigitContain(int n, int d);
void all_prime_factors(int n);

int main()
{
    return 0;
}
/*
1. Write a function to calculate the factorial of a number. (TSRS)
*/
unsigned long long factorial(int n)
{
    if (n < 0)
    {
        printf("Error: Factorial of a negative number is not defined.\n");
        return 0;
    }

    unsigned long long f = 1;
    for(int i=1; i<=n; i++)
        f=f*i;
    
    return f;
}


/*
2. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

*/
unsigned long long combinations(int n, int r)
{
    if (r > n || n < 0 || r < 0) 
    {
        printf("Invalid input: n must be >= r and both non-negative.\n");
        return 0;
    }
    return factorial(n)/(factorial(r)*factorial(n-r));
}


/*
3. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

*/

unsigned long long arrangements(int n, int r)
{
    if (r > n || n < 0 || r < 0) 
    {
        printf("Invalid input: n must be >= r and both non-negative.\n");
        return 0;
    }
    return factorial(n)/factorial(n-r);
}

/*
4. Write a function to check whether a given number contains a given digit or not.(TSRS)
*/

int isDigitContain(int n, int d)
{
    n = n < 0 ? -n : n;
    while(n!=0)
    {
        if(d==(n%10))
            return 1;
        n=n/10;
    }
    return 0;
}

/*
5. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/

void all_prime_factors(int n)
{
    for(int i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }
}

/*
void all_prime_factors(int n)
{
    for(int i=2; i*i <= n; i++)
    {
        while(n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }
    if(n > 1)  
        printf("%d ", n);
}
*/

