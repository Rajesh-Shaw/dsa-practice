/*
C Language
Assignment-27: More on Recursion
1. Write a recursive function to calculate sum of first N natural numbers
2. Write a recursive function to calculate sum of first N odd natural numbers
3. Write a recursive function to calculate sum of first N even natural numbers
4. Write a recursive function to calculate sum of squares of first n natural numbers
5. Write a recursive function to calculate sum of digits of a given number
*/

#include<stdio.h>
int sum_of_first_N_natural_numbers(int n);
int sum_of_first_N_odd_natural_numbers(int n);
int sum_of_first_N_even_natural_numbers(int n);
int sum_of_squares_of_first_N_natural_numbers(int n);
int sum_of_digits_of_number(int n);

int main()
{
    int n=0,result=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    result = sum_of_digits_of_number(n);
    printf("%d",result);
    return 0;
}

/*
1. Write a recursive function to calculate sum of first N natural numbers

1)f(n)          1+2+3+4+5+....+n
2)n+f(n-1)
3)n==1

*/

int sum_of_first_N_natural_numbers(int n)
{
    if(n==1)
        return 1;
    return n + sum_of_first_N_natural_numbers(n-1);
}


/*
2. Write a recursive function to calculate sum of first N odd natural numbers

1)f(n)          1+3+5+7+9+....+n   ==  (2*1-1) + (2*2-1) + (2*3-1) + (2*4-1) + (2*5-1) +.....+ (2*n-1) 
2)2*n-1+f(n-1)
3)n==1

*/

int sum_of_first_N_odd_natural_numbers(int n)
{
    if(n==1)
        return 1;
    return 2*n-1 + sum_of_first_N_odd_natural_numbers(n-1);
}



/*
3. Write a recursive function to calculate sum of first N even natural numbers

1)f(n)          2+4+6+8+10+....+n   ==  (2*1) + (2*2) + (2*3) + (2*4) + (2*5) +.....+ (2*n) 
2)2*n+f(n-1)
3)n==1

*/

int sum_of_first_N_even_natural_numbers(int n)
{
    if(n==1)
        return 2*1;
    return 2*n + sum_of_first_N_even_natural_numbers(n-1);
}




/*
4. Write a recursive function to calculate sum of squares of first n natural numbers

1)f(n)          1+4+9+16+25+....+n   ==  (1*1) + (2*2) + (3*3) + (4*4) + (5*5) +.....+ (n*n) 
2)n*n+f(n-1)
3)n==1

*/

int sum_of_squares_of_first_N_natural_numbers(int n)
{
    if(n==1)
        return n*n;
    return n*n + sum_of_squares_of_first_N_natural_numbers(n-1);
}




/*
5. Write a recursive function to calculate sum of digits of a given number

n=275
1)f(n)          275=2+7+5=14
2)n%10+f(n/10)
3)n==1

*/

int sum_of_digits_of_number(int n)
{
    if (n<0) n=-n;
    if(n==0)
        return 0;
    return n%10 + sum_of_digits_of_number(n/10);
}



