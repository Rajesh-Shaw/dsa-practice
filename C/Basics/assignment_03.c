
/*
C Language
Assignment-3: printf and scanf
1. Write a program to input a character from the user and print its ASCII code.
2. Write a program to input an ASCII code from the user and print its corresponding character.
3. Write a program to input three characters from the user and display characters with their corresponding ASCII codes.
4. Write a program to print last digit of a given number.
5. Write a program to print a given number without its last digit.
*/

/*
1. Write a program to input a character from the user and print its ASCII code.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character :");
    scanf("%c",&ch);
    printf("The ASCII Code of '%c' is %d",ch,ch);
    return 0;
}
*/


/*
2. Write a program to input an ASCII code from the user and print its corresponding character.


#include<stdio.h>
int main()
{
    int ch;
    printf("Enter a Number :");
    scanf("%d",&ch);
    printf("The ASCII Code %d and its corresponding character is %c",ch,ch);
    return 0;
}

*/



/*
3. Write a program to input three characters from the user and display characters with their corresponding ASCII codes.

#include<stdio.h>
int main()
{
    char ch1,ch2,ch3;
    printf("Enter three Characters : ");
    scanf(" %c %c %c",&ch1,&ch2,&ch3);
    printf("Characters with their corresponding ASCII codes '%c'=%d, '%c'=%d, and '%c'=%d ",ch1,ch1, ch2,ch2, ch3,ch3);
    return 0;

}
*/


/*
4. Write a program to print last digit of a given number.


#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    printf("Last digit of a given number %d",n%10);
    return 0;
}
*/


/*
5. Write a program to print a given number without its last digit.
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    printf("Without its last digit of a given number %d",n/10);
    return 0;
}

