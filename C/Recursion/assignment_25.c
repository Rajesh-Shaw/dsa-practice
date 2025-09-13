/*

C Language
Assignment-25: Recursion
1. Write a recursive function to print first N natural numbers
2. Write a recursive function to print first N natural numbers in reverse order
3. Write a recursive function to print first N odd natural numbers
4. Write a recursive function to print first N odd natural numbers in reverse order
5. Write a recursive function to print first N even natural numbers

*/

#include<stdio.h>
void natural_num(int n);
void natural_num_rev(int n);
void natural_num_odd(int n);
void natural_num_odd_rev(int n);
void natural_num_even(int n);


int main()
{
    int n=0;
    printf("Enter a number :");
    scanf("%d",&n);
    natural_num_even(n);
    return 0;
}
/*
1. Write a recursive function to print first N natural numbers

1)  f(n)        1,2,3,4,5,...,n
2)  f(n-1), n   
3)  n==1
*/

void natural_num(int n)
{
    if(n==1)
    {
        printf("%d ",n);
        return;
    }
    natural_num(n-1);
    printf("%d ",n);
}


/*
2. Write a recursive function to print first N natural numbers in reverse order
1)  f(n)        n,...,5,4,3,2,1
2)  n, f(n-1)   
3)  n==1

*/
void natural_num_rev(int n)
{
    if(n==1)
    {
        printf("%d ",n);
        return;
    }
    printf("%d ",n);
    natural_num_rev(n-1);
}



/*
3. Write a recursive function to print first N odd natural numbers

1)  f(n)        1,3,5,7,9,...,n
2)  f(n-1), n   
3)  n==1
*/

void natural_num_odd(int n)
{
    if(n==1)
    {
        printf("%d ",2*n-1);
        return;
    }
    natural_num_odd(n-1);
    printf("%d ",2*n-1);
}


/*
4. Write a recursive function to print first N odd natural numbers in reverse order

1)  f(n)        9,7,5,3,1,...,n
2)  n ,f(n-1)   
3)  n==1
*/

void natural_num_odd_rev(int n)
{
    if(n==1)
    {
        printf("%d ",2*n-1);
        return;
    }
    printf("%d ",2*n-1);
    natural_num_odd_rev(n-1);
}


/*
5. Write a recursive function to print first N even natural numbers

1)  f(n)        2,4,6,8,10,...,n
2)  f(n-1), n   
3)  n==1
*/

void natural_num_even(int n)
{
    if(n==1)
    {
        printf("%d ",2*n);
        return;
    }
    natural_num_even(n-1);
    printf("%d ",2*n);
}
