/*
C Language
Assignment-23: More on Functions
1. Write a function to calculate LCM of two numbers. (TSRS)
2. Write a function to calculate HCF of two numbers. (TSRS)
3. Write a function to check whether a given number is Prime or not. (TSRS)
4. Write a function to find the next prime number of a given number. (TSRS)
5. Write a function to print first N prime numbers (TSRN)
*/


#include<stdio.h>
int lcm(int a, int b);
int hcf(int a, int b);
int isPrime(int n);
int nextPrime(int n);
void firstN_Prime(int n);

int main()
{
    return 0;
}

/*
1. Write a function to calculate LCM of two numbers. (TSRS)

int lcm(int a, int b)
{
    int max=0, i=0;
    max = a>b?a:b;
    for(i=max; i<=a*b; i++)
    {
        if(i%a==0 && i%b==0)
            return i;
    }
    return a*b;
}
*/
int lcm(int a, int b)
{
    if(a == 0 || b == 0) 
        return 0;

    return (a*b)/hcf(a,b);
}

/*
2. Write a function to calculate HCF of two numbers. (TSRS)

int hcf(int a, int b)
{
    int min = (a < b) ? a : b;
    for(int i = min; i >= 1; i--)
    {
        if(a%i==0 && b%i==0)
            return i;
    }
    return 1;
}

*/

int hcf(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}



/*
3. Write a function to check whether a given number is Prime or not. (TSRS)
*/
int isPrime(int n)
{
    if (n <= 1) 
        return 0; 

    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

/*
4. Write a function to find the next prime number of a given number. (TSRS)
*/
int nextPrime(int n)
{
    int next_prime=0;
    for(n=n+1; ; n++)
    {
        next_prime = isPrime(n);
        if(next_prime)
            return n;
    }
    return -1;
}

/*
5. Write a function to print first N prime numbers (TSRN)
*/
void firstN_Prime(int n)
{
    int count = 0, num = 2;
    while(count < n)
    {
        if(isPrime(num))
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }

}