/*
C Language
Assignment-26: Recursion
1. Write a recursive function to print first N even natural numbers in reverse order
2. Write a recursive function to print squares of first N natural numbers
3. Write a recursive function to print binary of a given decimal number
4. Write a recursive function to print octal of a given decimal number
5. Write a recursive function to print reverse of a given number
*/

#include<stdio.h>
void natural_even_rev(int n);
void natural_num_square(int n);
void binary_of_decimal_num(int n);
void octal_of_decimal_num(int n);
void reverse_of_num(int n);

int main()
{
    int n=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    octal_of_decimal_num(n);
    return 0;
}

/*
1. Write a recursive function to print first N even natural numbers in reverse order

n=5
1) f(n)         n,.....,10,8,6,4,2
2) n,f(n-1)
3) n==1

*/
void natural_even_rev(int n)
{
    if(n==1)
    {
        printf("%d ",2*n);
        return;
    }
    printf("%d ",2*n);
    natural_even_rev(n-1);
}


/*
2. Write a recursive function to print squares of first N natural numbers
n=5
1) f(n)         1*1, 2*2, 3*3, 4*4, 5*5, ......., n*n
2) f(n-1), n
3) n==1

*/
void natural_num_square(int n)
{
    if(n==1)
    {
        printf("%d ",n*n);
        return;
    }
    natural_num_square(n-1);
    printf("%d ",n*n);

}




/*
3. Write a recursive function to print binary of a given decimal number
n=13
1) f(n)             13 ---> 1101
2) f(n/2), n%2
3) n==0

*/
void binary_of_decimal_num(int n)
{
    if(n==0)
    {
        return;
    }
    binary_of_decimal_num(n/2);
    printf("%d",n%2);

}


/*
4. Write a recursive function to print octal of a given decimal number
n=13
1) f(n)        13 --> 15
2) f(n-1), n
3) n==1

*/
void octal_of_decimal_num(int n)
{
    if(n==0)
    {
        return;
    }
    octal_of_decimal_num(n/8);
    printf("%d",n%8);

}


/*
5. Write a recursive function to print reverse of a given number
n=275
1) f(n)             275 --->  572
2) n%10 f(n/10)
3) n==0

*/
void reverse_of_num(int n)
{
    if(n==0)
    {
        return;
    }
    printf("%d",n%10);
    reverse_of_num(n/10);
}
