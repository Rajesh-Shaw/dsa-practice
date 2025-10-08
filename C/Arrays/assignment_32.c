/*

C Language with Logic Building
Assignment-32: Arrays and Functions
1. Write a function to swap two elements of given array with specified indices.
2. Write a function to count a total number of duplicate elements in an array. (Means elements that occurs 2 times in an array)
3. Write a function to print all unique elements in an array.
4. Write a function to merge two arrays of the same size sorted in descending order.
5. Write a function to count the frequency of each element of an array.
*/

#include<stdio.h>
void swap_two_elements_in_array(int a[], int n, int index1, int index2);
void total_duplicate_elements(int a[], int n);
void print_unique_element(int a[], int n);
void merge_array(int a[], int n);
void count_frequency_element_of_array(int a[], int n);
int main()
{
    int n, index1, index2;
    printf("Enter Size of an Array : ");
    scanf("%d",&n);

    int a[n];
    printf("Enter %d array values : ",n);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    // printf("Enter Two indices for swap values of array : ");
    // scanf("%d%d",&index1, &index2);

    // swap_two_elements_in_array(a, n, index1, index2 );

    total_duplicate_elements(a, n);

    return 0;
}


/*
1. Write a function to swap two elements of given array with specified indices.

*/

void swap_two_elements_in_array(int a[], int n, int index1, int index2)
{
    int t;
    printf("\nBefore Swap : ");
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);

    t=a[index1];
    a[index1]=a[index2];
    a[index2]=t;

    printf("\nAfter Swap  : ");
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
}


/*
2. Write a function to count a total number of duplicate elements in an array. (Means elements that occurs 2 times in an array)

*/
void total_duplicate_elements(int a[], int n)
{
    int c=0;
    int visited[n];
    for(int i=0; i<n; i++)
        visited[i] = 0;

    for(int i=0; i<n; i++)
    {
        if(visited[i]) 
            continue;

        int count = 1;
        for(int j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        if(count > 1) 
            c++;

    }
    printf("Total number of duplicate elements in an array %d",c);
}


/*
3. Write a function to print all unique elements in an array.

*/



/*
4. Write a function to merge two arrays of the same size sorted in descending order.

*/



/*
5. Write a function to count the frequency of each element of an array.

*/