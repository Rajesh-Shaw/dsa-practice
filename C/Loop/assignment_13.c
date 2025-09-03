/*
C Language
Assignment-13: Use any loop
1. Write a program to calculate sum of first N natural numbers
2. Write a program to calculate sum of first N even natural numbers
3. Write a program to calculate sum of first N odd natural numbers
4. Write a program to calculate sum of squares of first N natural numbers
5. Write a program to calculate sum of cubes of first N natural numbers
*/

/*
1. Write a program to calculate sum of first N natural numbers

#include<stdio.h>
int main()
{
    int n=0,i=0,sum=0;
    printf("Enter a Number :");
    scanf("%d",&n);

    if(n<=0)
        printf("Please enter a positive number.\n");
    else
        for(i=1; i<=n; i++)
            sum=sum+i;
    
    printf("Sum of first %d natural numbers is %d",n,sum);

    return 0;
}
*/


/*
2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main()
{
    int n=0,i=0,sum=0;
    printf("Enter a Number :");
    scanf("%d",&n);

    if(n<=0)
        printf("Please enter a positive number.\n");
    else
        for(i=1; i<=n; i++)
            sum=sum+2*i;
    
    printf("Sum of first %d even natural numbers is %d",n,sum);

    return 0;
}
*/


/*
3. Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>
int main()
{
    int n=0,i=0,sum=0;
    printf("Enter a Number :");
    scanf("%d",&n);

    if(n<=0)
        printf("Please enter a positive number.\n");
    else
        for(i=1; i<=n; i++)
            sum=sum+2*i-1;
    
    printf("Sum of first %d odd natural numbers is %d",n,sum);

    return 0;
}
*/

/*
4. Write a program to calculate sum of squares of first N natural numbers

#include<stdio.h>
int main()
{
    int n=0,i=0,sum=0;
    printf("Enter a Number :");
    scanf("%d",&n);

    if(n<=0)
        printf("Please enter a positive number.\n");
    else
        for(i=1; i<=n; i++)
            sum=sum+i*i;
    
    printf("Sum of squares of first %d natural numbers is %d",n,sum);

    return 0;
}
*/


/*
5. Write a program to calculate sum of cubes of first N natural numbers
*/
#include<stdio.h>
int main()
{
    int n=0,i=0,sum=0;
    printf("Enter a Number :");
    scanf("%d",&n);

    if(n<=0)
        printf("Please enter a positive number.\n");
    else
        for(i=1; i<=n; i++)
            sum=sum+i*i*i;
    
    printf("Sum of cubes of first %d natural numbers is %d",n,sum);

    return 0;
}

