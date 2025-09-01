/* C Language
Assignment-1: Input and output in C Language
1. Write a program to print Hello Students on the screen.
2. Write a program to print Hello in the first line and Students in the second line.
3. Write a program to print "MySirG" on the screen. (Remember to print in double quotes)
4. Write a program to print \n on the screen.
5. Write a program to print \r on the screen.
6. Write a program to print "Teacher's Day" on the screen. (Remember to print double and single quotes)
7. Write a program to calculate sum of two integers. Numbers are taken from user through keyboard.
8. Write a program to calculate square of a given number. Number is entered by the user.
9. Write a program to calculate area of a rectangle. Input appropriate data from the user.
10. WAP to find the area of the circle. Take radius of circle from user as input.
*/




// 1. Write a program to print Hello Students on the screen.
/*
#include<stdio.h>
int main()
{
    printf("Hello Students");
    return 0;
}

*/



// 2. Write a program to print Hello in the first line and Students in the second line.
/*
#include<stdio.h>
int main()  
{
    printf("Hello\nStudents");
    return 0;
}
*/




// 3. Write a program to print "MySirG" on the screen. (Remember to print in double quotes)
/* 
#include<stdio.h>
int main()
{
    printf("\"MysirG\"");
    return 0;
}

*/



/*
4. Write a program to print \n on the screen.


#include<stdio.h>
int main()
{
    printf("\\n");
    return 0;
}

*/




/*
5. Write a program to print \r on the screen.


#include<stdio.h>
int main()
{
    printf("\\r");
    return 0;
}
*/



/*
6. Write a program to print "Teacher's Day" on the screen. (Remember to print double and single quotes)



#include<stdio.h>
int main()
{
    printf("\"Teacher\'s Day\"");
    return 0;
}
*/



/*
7. Write a program to calculate sum of two integers. Numbers are taken from user through keyboard.

#include<stdio.h>
int main()
{
    int a=0,b=0;
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);

    printf("sum of two integers %d",a+b);
    return 0;
}
*/



/*
8. Write a program to calculate square of a given number. Number is entered by the user.

#include<stdio.h>
int main()
{
    int a=0,b=0;
    printf("Enter a Number:");
    scanf("%d",&a);

    printf("Square of The given number is %d",a*a);
    return 0;
}
*/


/*
9. Write a program to calculate area of a rectangle. Input appropriate data from the user.

#include<stdio.h>
int main()
{
    float a=0,b=0;
    printf("Enter Length and Breadth of a Rectangle:");
    scanf("%f%f",&a,&b);

    printf("Area of a rectangle %f",a*b);
    return 0;
}
*/


/*
10. WAP to find the area of the circle. Take radius of circle from user as input.
*/
#include<stdio.h>
int main()
{
    float r=0;
    printf("Enter the Radius of a circle:");
    scanf("%f",&r);

    printf("Area of the circle %f",3.14*r*r);
    return 0;
}
