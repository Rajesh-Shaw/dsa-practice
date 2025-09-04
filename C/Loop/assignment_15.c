/*
C Language
Assignment-15: Level up with loops
1. Write a program to print all Prime numbers under 100
2. Write a program to print all Prime numbers between two given numbers
3. Write a program to find next Prime number of a given number
4. Write a program to calculate HCF of two numbers
5. Write a program to check whether two given numbers are co-prime numbers or not
*/

/*
1. Write a program to print all Prime numbers under 100

#include<stdio.h>
int main()
{
    int n=0, i=0, flag=1;
    printf("Prime numbers under 100 :\n");

    for(n=2; n<=100; n++)
    {
        for(i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }

        if(flag)
            printf("%d ",n);
        
        flag=1;
            
    }

    return 0;
}
*/

/*
2. Write a program to print all Prime numbers between two given numbers


#include<stdio.h>
int main()
{
    int n=0, i=0, flag=1, n1=0, n2=0;
    printf("Enter two number for prime number range :");
    scanf("%d%d",&n1,&n2);

    printf("Prime numbers between %d and %d :\n",n1,n2);

    if(n1<=1)
    {
        n1=2;
    }
    else if(n2<=1)
    {
        n2=1;
    }
    else
    {
        for(n=n1; n<=n2; n++)
        {
            for(i=2; i*i<=n; i++)
            {
                if(n%i==0)
                {
                    flag=0;
                    break;
                }
            }

            if(flag)
                printf("%d ",n);
            
            flag=1;
                
        }
    }
    

    return 0;
}

*/


/*
3. Write a program to find next Prime number of a given number

#include<stdio.h>
int main()
{
    int n=0, i=0, flag=1;
    printf("Enter a number : ");
    scanf("%d",&n);

    printf("Given number %d and Next Prime number is : ",n);

    for(n=n+1; ; n++)
    {
        for(i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }

        if(flag)
        {
            printf("%d ",n);
            break;
        }
        else
        {
            flag=1;
        }
        
        
            
    }

    return 0;
}

*/


/*
4. Write a program to calculate HCF of two numbers


#include<stdio.h>
int main()
{
    int n1=0, n2=0, hcf=0;
    printf("Enter two number :");
    scanf("%d%d",&n1,&n2);

    if(n1<n2)
        hcf=n1;
    else
        hcf=n2;

    for(hcf; hcf>=1; hcf--)
    {
        if(n1%hcf==0 && n2%hcf==0)
            break;
    }

    printf("HCF of two numbers %d and %d is %d.\n",n1,n2,hcf);
    return 0;
}
*/

/*
5. Write a program to check whether two given numbers are co-prime numbers or not
*/


#include<stdio.h>
int main()
{
    int n1=0, n2=0, hcf=0;
    printf("Enter two number :");
    scanf("%d%d",&n1,&n2);

    if(n1<n2)
        hcf=n1;
    else
        hcf=n2;

    for(hcf; hcf>=1; hcf--)
    {
        if(n1%hcf==0 && n2%hcf==0)
            break;
    }

    if(hcf==1)
        printf("Given numbers %d, %d are co-prime.",n1,n2);
    else
        printf("Given numbers %d, %d are not co-prime.",n1,n2);

    return 0;
}