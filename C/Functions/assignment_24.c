/*
C Language
Assignment-24: More on Functions
1. Write a function to print all Prime numbers between two given numbers. (TSRN)
2. Write a function to print first N terms of Fibonacci series (TSRN)
3. Write a function to print PASCAL Triangle. (TSRN)
4. Write a function to print all Armstrong numbers between two given numbers.
(TSRN)
5. Write a function to find the sum of first N terms of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5... n!/n  (TSRS)

*/



#include<stdio.h>
int isPrime(int n);
void allPrime(int a, int b);

void fibonacci(int n);
void pascalTriangle(int n);
long factorial(int n);
long nCr(int n, int r);

void allArmstrong(int a, int b);
int armstrong(int n);
long sum_of_n_series(int n);

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pascalTriangle(n);

    return 0;
}

/*
1. Write a function to print all Prime numbers between two given numbers. (TSRN)
*/

void allPrime(int a, int b)
{
    for(a; a<=b; a++)
    {
        if(isPrime(a))
            printf("%d ",a);
    }
}

int isPrime(int n)
{
    if(n<=1)
        return 0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}


/*
2. Write a function to print first N terms of Fibonacci series (TSRN)
*/
void fibonacci(int n)
{
    int a=0, b=1, c=1;
    if(n==1)
        {
            printf("Fibonacci series :\n %d ",a);
            return;
        }
    if(n==2)
        {printf("Fibonacci series :\n %d %d ",a,b);
            return;
        }

    for(int i=3; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}



/*
3. Write a function to print PASCAL Triangle. (TSRN)

     :1 2 3 4 5 6 ...=(2*n-1)      

Row 1:          1
Row 2:        1   1
Row 3:      1   2   1
Row 4:    1   3   3   1
Row 5:  1   4   6   4   1
Row 6:1   5  10  10   5   1

i   j                   J
1   6                   
2   5,7         
3   4,6,8
4   3,5,7,9             
5   2,4,6,8,10
6   1,3,5,7,9,11

*/
void pascalTriangle(int rows)
{
    for(int i=1; i<=rows; i++)
    {
        for (int space=1; space<=rows-i; space++)
            printf("  ");

        for (int j = 0; j < i; j++)
            printf("%4ld ", nCr(i-1, j));
        
        printf("\n");
    }
}

// Function to calculate factorial
long factorial(int n) 
{
    long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

// Function to calculate nCr
long nCr(int n, int r) 
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}


/*
4. Write a function to print all Armstrong numbers between two given numbers.
(TSRN)
*/
void allArmstrong(int a, int b)
{
    for(a; a<=b; a++)
    {
        if(armstrong(a))
        {
            printf("%d ",a);
        }
    }

}


int armstrong(int n)
{
    int c=0,r=0,num=n,arm=0,powr=1;
    while(num!=0)
    {
        num=num/10;
        c++;
    }
    num=n;
    while(num!=0)
    {
        r=num%10;
        powr = 1;
        for(int i=1; i<=c; i++)
            powr =powr*r;
        arm=arm+powr;
        num=num/10;
    }
    if(n==arm)
        return 1;
    else
        return 0;        
}

/*
5. Write a function to find the sum of first N terms of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5... n!/n (TSRS)
*/
long sum_of_n_series(int n)
{
    long sum=0;
    for(int i=1; i<=n; i++)
    {
        sum=sum + factorial(i)/i;
    }
    return sum;
}