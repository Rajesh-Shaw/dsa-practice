/*

C Language with Logic Building
Assignment-31: Arrays and Functions
1. Write a function to find the greatest number from the given array of any size.(TSRS)
2. Write a function to find the smallest number from the given array of any size.(TSRS)
3. Write a function to sort an array of any size. (TSRN)
4. Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29])
5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.

*/

#include<stdio.h>
int Q1(int a[], int n);
int Q2(int a[], int n);
void Q3(int a[], int n);
void Q4(int a[], int n);
int Q5(int a[], int n);


int main()
{
    int n=0, result=0;
    printf("Enter Size of Array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d Numbers : ",n);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    result=Q5(a, n);
    printf("First occurrence of adjacent duplicate values = %d\n", result);
    // Q4(a,n);

    return 0;
}


/*
1. Write a function to find the greatest number from the given array of any size.(TSRS)

*/
int Q1(int a[], int n)
{
    int max=a[0];
    for(int i=0; i<n; i++)
        if(a[i]>max)
            max=a[i];
    return max;
}



/*
2. Write a function to find the smallest number from the given array of any size.(TSRS)

*/
int Q2(int a[], int n)
{
    int min=a[0];
    for(int i=0; i<n; i++)
        if(a[i]<min)
            min=a[i];
    return min;
}



/*
3. Write a function to sort an array of any size. (TSRN)

*/
void Q3(int a[], int n)
{
    int t=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n-i-1; j++)
            if(a[j+1]<a[j])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
    
    for(int i=0; i<n; i++)
            printf("%d ",a[i]);

}



/*
4. Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29])

*/
void Q4(int a[], int n)
{
    int d=2;
    for(int i=0; i<2; i++)
        for(int j=0; j<n-i-1; j++)
        {
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }

        for(int j=n-2; j<n-1; j++)
        {
            int t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
}



/*
5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.

*/

int Q5(int a[], int n)
{
    for(int i=0; i<n-1; i++)
        if(a[i]==a[i+1])
            return a[i];

    return -1;
}