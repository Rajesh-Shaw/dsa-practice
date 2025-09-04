/*
C Language
Assignment-14: Use any loop
1. Write a program to calculate factorial of a number
2. Write a program to count digits in a given number
3. Write a program to check whether a given number is a Prime number or not
4. Write a program to calculate LCM of two numbers
5. Write a program to reverse a given number
*/

/*
1. Write a program to calculate factorial of a number

#include<stdio.h>
int main()
{
    int f=1, i=0, n=0;
    printf("Enter a Number : ");
    scanf("%d",&n);

    if(n < 0)
        printf("Factorial of %d is undefine",n);
    else
    {
        for(i=1; i<=n; i++)
        {
            f=f*i;
        }
        printf("Factorial of %d is %d",n,f);
    }
    return 0;
}
*/


/*
2. Write a program to count digits in a given number

#include<stdio.h>
int main()
{
    int c=0, i=0, n=0,num=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    num=n;

    if(n == 0)
        c = 1;
    else 
    {
        while(num!=0)
        {
            num=num/10;
            c++;
        }
    }
        
    printf("Given number %d have %d digits.",n,c);
    return 0;
}
*/

/*
3. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main()
{
    int i=0, n=0, flag=1;
    printf("Enter a Number : ");
    scanf("%d",&n);
   
    if(n <= 1) flag = 0;
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }

    if(flag)
        printf("Given number %d is a Prime number.",n);
    else
        printf("Given number %d is not a Prime number.",n);
    
    
    return 0;
}
*/

/*
4. Write a program to calculate LCM of two numbers

#include<stdio.h>
int main()
{
    int n1=0, n2=0, i=0;
    printf("Enter two Numbers : ");
    scanf("%d%d",&n1,&n2);
   
    if(n1>n2)
        i=n1;
    else
        i=n2;

    for(i; ;i++)
    {
        if(i%n1==0 && i%n2==0)
            break;
    }

    printf("LCM of %d and %d is %d",n1,n2,i);   
    
    return 0;
}
*/

/*
5. Write a program to reverse a given number
*/

#include<stdio.h>
int main()
{
    int n=0, num=0, reverse=0, r=0;
    printf("Enter a Numbers : ");
    scanf("%d",&num);
    n=num;

    while(n!=0)
    {
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }   

    printf("Reverse a given number %d is %d",num,reverse);   
    
    return 0;
}