/*
C Language
Assignment-21: Functions
1. Write a function to calculate the area of a circle. (TSRS)
2. Write a function to calculate simple interest. (TSRS)
3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
4. Write a function to print first N natural numbers (TSRN)
5. Write a function to print first N odd natural numbers. (TSRN)
*/

#include<stdio.h>
/*
1. Write a function to calculate the area of a circle. (TSRS)
*/
 
float circleArea(float r)
{
    return 3.14*r*r;
}

/*
2. Write a function to calculate simple interest. (TSRS)
*/

float simple_interest(float p, float r, float t)
{
    return (p*r*t)/100;
}

/*
3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
*/

int isEven(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
    
    // return (n % 2 == 0);
}

/*
4. Write a function to print first N natural numbers (TSRN)
*/

void natural_numbers(int n)
{
    for(int i=1; i<=n; i++)
        printf("%d\n",i);
}


/*
5. Write a function to print first N odd natural numbers. (TSRN)
*/
void odd_natural_numbers(int n)
{
    for(int i=1; i<=n; i++)
        printf("%d\n",2*i-1);
}



int main()
{
    // // Q1
    // float r=0,area;
    // printf("Enter circle Redius :");
    // scanf("%f",&r);
    // area=circleArea(r);
    // printf("Area of Circle %.2f",area);


    // // Q2
    // float p,r,t,si;
    // printf("Enter Principle, rate of interest and time in year :");
    // scanf("%f%f%f",&p,&r,&t);
    // si=simple_interest(p,r,t);
    // printf("Simple Interest %.2f",si);


    // // Q3
    // int n=0,result=0;
    // printf("Enter a number :");
    // scanf("%d",&n);
    // result=isEven(n);
    // if(result)
    //     printf("%d is an Even Number.",n);
    // else
    //     printf("%d is an Odd Number.",n);


    // // Q4
    // int n=0;
    // printf("Enter a number :");
    // scanf("%d",&n);
    // natural_numbers(n);



    // Q5
    int n=0;
    printf("Enter a number :");
    scanf("%d",&n);
    odd_natural_numbers(n);
   

    return 0;
}