/*
C Language
Assignment-4: Operators in C Language
1. Write a program to calculate size of a character constant.
2. Write a program to calculate size of a real constant.
3. Write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.
4. Write a program to swap values of two int variables
5. Write a program to swap values of two int variables without using a third variable.
6. Write a program to swap values of two int variables without using third variable and without using +, - operators.
7. Write a program to swap values of two int variables without using third variable and arithmetic operators.
8. Write a program to swap values of two int variables in single line arithmetic expression.
*/

/*
1. Write a program to calculate size of a character constant.

#include<stdio.h>
int main()
{
    printf("size of a Character constant is %d",sizeof('A'));
    return 0;
}

*/

/*
2. Write a program to calculate size of a real constant.

#include<stdio.h>
int main()
{
    printf("size of a real constant is %d",sizeof(2.5));
    return 0;
}
*/


/*
3. Write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.

#include<stdio.h>
int main()
{
    char ch = 'A';
    printf("Before increment: %c\n", ch);
    ch++;
    printf("After increment: %c\n", ch);
    return 0;
}
*/


/*
4. Write a program to swap values of two int variables

#include<stdio.h>
int main()
{
    int a=5,b=10,t=0;
    printf("Before swap a=%d and b=%d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("After  swap a=%d and b=%d\n",a,b);
    return 0;
}
*/

/*
5. Write a program to swap values of two int variables without using a third variable.


#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("Before swap a=%d and b=%d\n",a,b);
    a= a+b;
    b= a-b;
    a= a-b;
    printf("After  swap a=%d and b=%d\n",a,b);
    return 0;
}

*/

/*
6. Write a program to swap values of two int variables without using third variable and without using +, - operators.


#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("Before swap a=%d and b=%d\n",a,b);
    a= a*b;
    b= a/b;
    a= a/b;
    printf("After  swap a=%d and b=%d\n",a,b);
    return 0;

}
*/

/*
7. Write a program to swap values of two int variables without using third variable and arithmetic operators.
*/

#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("Before swap a=%d and b=%d\n",a,b);
    a= a^b;
    b= a^b;
    a= a^b;
    printf("After  swap a=%d and b=%d\n",a,b);
    return 0;

}
    

/*
8. Write a program to swap values of two int variables in single line arithmetic expression.



#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("Before swap a=%d and b=%d\n",a,b);
    a= a+b-(b=a);
    printf("After  swap a=%d and b=%d\n",a,b);
    return 0;

}
*/