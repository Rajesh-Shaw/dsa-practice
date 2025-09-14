/*
C Language with Logic Building
Assignment-29: Arrays
1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
*/

#include<stdio.h>
void Q1();
void Q2();
void Q3();
void Q4();
void Q5();


int main()
{
    Q5();
    return 0;
}

/*
1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.

*/
void Q1()
{
    int a[10], sum=0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<=9; i++)
        scanf("%d",&a[i]);

    for(int i=0; i<=9; i++)
        sum=sum+a[i];
    
    printf("Sum of numbers = %d.",sum);
}


/*
2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
*/
void Q2()
{
    int a[10], sum=0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<=9; i++)
        scanf("%d",&a[i]);

    for(int i=0; i<=9; i++)
        sum=sum+a[i];
    
    printf("Average of numbers = %.2f.",sum/10.0);
}



/*
3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.

*/
void Q3()
{
    int a[10], sum_of_even=0, sum_of_odd=0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<=9; i++)
        scanf("%d",&a[i]);

    for(int i=0; i<=9; i++)
    {
        if(a[i]%2==0)
            sum_of_even = sum_of_even + a[i];
        else
            sum_of_odd = sum_of_odd + a[i];

    }
    
    printf("Sum of all even numbers = %d.\n",sum_of_even);
    printf("Sum of all odd numbers = %d.",sum_of_odd);

}



/*
4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

*/
void Q4()
{
    int a[10];
    printf("Enter 10 numbers : ");
    for(int i=0; i<=9; i++)
        scanf("%d",&a[i]);
    
    int max=a[0]; 
    for(int i=0; i<=9; i++)
    {          
        if(a[i]>max)
            max=a[i];
    }
    
    printf("Greatest number= %d.\n",max);

}


/*
5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.

*/
void Q5()
{
    int a[10];
    printf("Enter 10 numbers : ");
    for(int i=0; i<=9; i++)
        scanf("%d",&a[i]);
    
    int min=a[0]; 
    for(int i=0; i<=9; i++)
    {          
        if(a[i]<min)
            min=a[i];
    }
    
    printf("Smallest number= %d.\n",min);

}