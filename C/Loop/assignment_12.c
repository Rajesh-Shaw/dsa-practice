/*
C Language
Assignment-12: while loop
1. Write a program to print MySirG N times on the screen
2. Write a program to print the first N natural numbers.
3. Write a program to print the first N natural numbers in reverse order
4. Write a program to print the first N odd natural numbers
5. Write a program to print the first N odd natural numbers in reverse order.
6. Write a program to print the first N even natural numbers
7. Write a program to print the first N even natural numbers in reverse order
8. Write a program to print squares of the first N natural numbers
9. Write a program to print cubes of the first N natural numbers
10. Write a program to print a table of N.
*/

/*
1. Write a program to print MySirG N times on the screen

#include<stdio.h>
int main()
{
    int n=0,i=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        for(i=1;i<=n;i++)
            printf("%d) MySirG\n",i);

    return 0;
}

#include<stdio.h>
int main()
{
    int n=0,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        while(i<=n)
        {
            printf("%d) MySirG\n",i);
            i++;
        }            

    return 0;
}
*/

/*
2. Write a program to print the first N natural numbers.

#include<stdio.h>
int main()
{
    int n=0,i=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        for(i=1;i<=n;i++)
            printf("%d\n",i);

    return 0;
}


#include<stdio.h>
int main()
{
    int n=0,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        while(i<=n)
        {
            printf("%d\n",i);
            i++;
        }            

    return 0;
}

*/

/*
3. Write a program to print the first N natural numbers in reverse order

#include<stdio.h>
int main()
{
    int n=0,i=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        for(i=n;i>=1;i--)
            printf("%d\n",i);

    return 0;
}


#include<stdio.h>
int main()
{
    int n=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        while(n>=1)
        {
            printf("%d\n",n);
            n--;
        }            

    return 0;
}

*/

/*
4. Write a program to print the first N odd natural numbers

#include<stdio.h>
int main()
{
    int n=0,i=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        for(i=1;i<=n;i++)
            printf("%d\n",2*i-1);

    return 0;
}

#include<stdio.h>
int main()
{
    int n=0,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        while(i<=n)
        {
            printf("%d\n",2*i-1);
            i++;
        }            

    return 0;
}
*/

/*
5. Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int n=0,i=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        for(i=n;i>=1;i--)
            printf("%d\n",2*i-1);

    return 0;
}


#include<stdio.h>
int main()
{
    int n=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        while(n>=1)
        {
            printf("%d\n",2*n-1);
            n--;
        }            

    return 0;
}
*/


/*
6. Write a program to print the first N even natural numbers

#include<stdio.h>
int main()
{
    int n=0,i=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        for(i=1;i<=n;i++)
            printf("%d\n",2*i);

    return 0;
}


#include<stdio.h>
int main()
{
    int n=0,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        while(i<=n)
        {
            printf("%d\n",2*i);
            i++;
        }            

    return 0;
}

*/

/*
7. Write a program to print the first N even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int n=0,i=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        for(i=n;i>=1;i--)
            printf("%d\n",2*i);

    return 0;
}


#include<stdio.h>
int main()
{
    int n=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        while(n>=1)
        {
            printf("%d\n",2*n);
            n--;
        }            

    return 0;
}

*/

/*
8. Write a program to print squares of the first N natural numbers

#include<stdio.h>
int main()
{
    int n=0,i=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        for(i=1;i<=n;i++)
            printf("%d^2 = %d\n",i,i*i);

    return 0;
}

#include<stdio.h>
int main()
{
    int n=0,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        while(i<=n)
        {
            printf("%d^2 = %d\n",i,i*i);
            i++;
        }            

    return 0;
}
    
*/

/*
9. Write a program to print cubes of the first N natural numbers

#include<stdio.h>
int main()
{
    int n=0,i=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        for(i=1;i<=n;i++)
            printf("%d^3 = %d\n",i,i*i*i);

    return 0;
}


#include<stdio.h>
int main()
{
    int n=0,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        while(i<=n)
        {
            printf("%d^3 = %d\n",i,i*i*i);
            i++;
        }            

    return 0;
}

*/

/*
10. Write a program to print a table of N.

#include<stdio.h>
int main()
{
    int n=0,i=0;
    printf("Which table you want to print :");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        for(i=1;i<=10;i++)
            printf("%d * %d = %d\n",n,i,n*i);

    return 0;
}
*/

#include<stdio.h>
int main()
{
    int n=0,i=1;
    printf("Which table you want to print :");
    scanf("%d",&n);

    if(n <= 0)
        printf("Please enter a positive number.\n");
    else
        while(i<=10)
        {
            printf("%d * %d = %d\n",n,i,n*i);
            i++;
        }            

    return 0;
}