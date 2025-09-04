/*
C Language
Assignment-16: Level up with loops
1. Write a program to find the Nth term of the Fibonacci series.
2. Write a program to print first N terms of Fibonacci series
3. Write a program to check whether a given number is there in the Fibonacci series or not.
4. Write a program to check whether a given number is an Armstrong number or not
5. Write a program to print all Armstrong numbers under 1000
*/

/*
1. Write a program to find the Nth term of the Fibonacci series.

#include<stdio.h>
int main()
{
    int t1=0, t2=1, t3=0, n=0, i=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n == 1)
        printf("The %dth term of Fibonacci series is %d", n, t1);
    else if(n == 2)
        printf("The %dth term of Fibonacci series is %d", n, t2);
    else
    {
        for(i=3; i<=n; i++)
        {        
            t3=t1+t2;
            t1=t2;
            t2=t3;

        }
        printf("The %dth term of Fibonacci series is %d", n, t3);
    }

    return 0;
}
*/

/*
2. Write a program to print first N terms of Fibonacci series

#include<stdio.h>
int main()
{
    int t1=0, t2=1, t3=0, n=0, i=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Fibonacci series : \n %d %d",t1,t2);

    for(i=3; i<=n; i++)
    {        
        t3=t1+t2;
        t1=t2;
        t2=t3;

        printf(" %d",t3);
    }

    return 0;
}
*/

/*
3. Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>
int main()
{
    int t1=0, t2=1, t3=0, n=0, i=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n == 0)
        printf("The given number %d is there in the Fibonacci series", n);
    else if(n == 1)
        printf("The given number %d is there in the Fibonacci series", n);
    else
    {
        while(t3 < n)
        {        
            t3=t1+t2;
            t1=t2;
            t2=t3;

        }
            
        if(n==t3)
        {
            printf("The given number %d is there in the Fibonacci series", n);
                
        }        
        else
        {
                printf("The given number %d is not in the Fibonacci series", n);
        }
    }

    return 0;
}
*/

/*
4. Write a program to check whether a given number is an Armstrong number or not


#include<stdio.h>
int main()
{
    int n=0, num=0, amt=0, r=0, c=0, i=0, t=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    n=num;

    while(n!=0)
    {
        n=n/10;
        c++;
    }

    n=num;
    while(n != 0)
    {
        r   = n%10;
        for(i=1; i<=c; i++)
            t=t*r;

        amt = amt+t;
        n   = n/10;
        t=1;
    }

   
            
    if(num==amt)
    {
        printf("The given number %d is an Armstrong number", num);
    }        
    else
    {
        printf("The given number %d is Not an Armstrong number", num);
    }
    

    return 0;
}
*/


/*
5. Write a program to print all Armstrong numbers under 1000

*/
#include<stdio.h>
int main()
{
    int i=0, n=0, num=1000, c=0, r=0, arm=0, rc=1, j=0;
    // printf("Enter a number : ");
    // scanf("%d",&num);
    
    printf("All Armstrong numbers under 1000 : ");
    for(i=1; i<num; i++)
    {
        n=i;
        c=0;
        arm=0;   

        while(n!=0)
        {
            n=n/10;
            c++;
        }

        n=i;
        while(n!=0)
        {
            r=n%10;
            rc=1;
            for(j=1;j<=c;j++)
            {
                rc=rc*r;
            }
            
            
            arm=arm+rc;
            n=n/10; 
        }

        if(arm==i)
            printf("%d ",i);
    
        
    }
    return 0;
}
