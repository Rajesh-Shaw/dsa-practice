/*
C Language with Logic Building
Assignment-30: Arrays
1. Write a program to sort elements of an array of size 10. Take array values from the user.
2. Write a program to find second largest in an array. Take array values from the user.
3. Write a program to find the second smallest number in an array. Take array values from the user.
4. Write a program to sort an array of 10 elements in descending order.
5. Write a program in C to copy the elements of one array into another array. Take array values from the user.
*/


#include<stdio.h>
void Q1();
void Q2();
void Q3();
void Q4();
void Q5();



/*
1. Write a program to sort elements of an array of size 10. Take array values from the user.

*/
void Q1()
{
    int a[10], t=0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<=9; i++)
        scanf("%d",&a[i]);

    for(int i=0; i<=9; i++)
        for(int j=0; j<9-i; j++)
            if(a[j+1]<a[j])
            {
                t      = a[j];
                a[j]   = a[j+1];
                a[j+1] = t;
            }
    
    printf("Sorted array: ");
    for(int i=0; i<=9; i++)
        printf("%d ",a[i]);
}



/*
2. Write a program to find second largest in an array. Take array values from the user.

*/
void Q2()
{
    int a[10], max=0, max2=0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<=9; i++)
        scanf("%d",&a[i]);

    max=a[0];
    max2=a[0];

    for(int i=0; i<=9; i++)
        if(a[i]>max)
            max=a[i];
    
    for(int i=0; i<=9; i++)
        if(a[i]>max2 && a[i] < max )
            max2=a[i];
        
    
    printf("Second largest: %d",max2);
    
}


/*
3. Write a program to find the second smallest number in an array. Take array values from the user.

*/
void Q3()
{
    int a[10], min=0, min2=0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<=9; i++)
        scanf("%d",&a[i]);

    min=a[0];
    min2=a[0];

    for(int i=0; i<=9; i++)
        if(a[i]<min)
            min=a[i];
    
    for(int i=0; i<=9; i++)
        if(a[i]<min2 && a[i] > min )
            min2=a[i];
        
    
    printf("Second smallest: %d",min2);
    
}


/*
4. Write a program to sort an array of 10 elements in descending order.

*/

void Q4()
{
    int a[10], t=0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<=9; i++)
        scanf("%d",&a[i]);

    for(int i=0; i<=9; i++)
        for(int j=0; j<9-i; j++)
            if(a[j+1]>a[j])
            {
                t      = a[j];
                a[j]   = a[j+1];
                a[j+1] = t;
            }
    
    printf("Sorted array in descending order : ");
    for(int i=0; i<=9; i++)
        printf("%d ",a[i]);
}

/*
5. Write a program in C to copy the elements of one array into another array. Take array values from the user.

*/
void Q5()
{
    int a[10], b[10];
    printf("Enter 10 numbers : ");
    for(int i=0; i<=9; i++)
        scanf("%d",&a[i]);

    for(int i=0; i<=9; i++)
        b[i]=a[i];
    
    printf("Orginal Array : ");
    for(int i=0; i<=9; i++)
        printf("%d ",a[i]);
    
    printf("\nCopy Array    : ");
    for(int i=0; i<=9; i++)
        printf("%d ",b[i]);
            
}



int main()
{
    Q5();
    return 0;
}
