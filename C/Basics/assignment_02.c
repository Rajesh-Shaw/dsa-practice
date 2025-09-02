/*
C Language
Assignment-2: printf and scanf
1. Write a program to calculate average of three integers. Numbers are given by the user.
2. Write a program to calculate circumference of a circle.
3. Write a program to calculate simple interest.
4. Write a program to calculate volume of a cuboid.
5. Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.
*/

/*
1. Write a program to calculate average of three integers. Numbers are given by the user.

#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("Enter Threee Numbers :");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3.0;

    printf("Average of three integers %d, %d, %d = %.2f", a,b,c,avg);
    return 0;
}
*/


/*
2. Write a program to calculate circumference of a circle.

#include<stdio.h>
#include<math.h>
int main()
{
    float r;
    printf("Enter Radius of the Circle :");
    scanf("%f",&r);

    printf("Circumference of a circle (radius is %.2f) = %.2f", r, 2*M_PI*r);
    return 0;
}
*/


/*
3. Write a program to calculate simple interest.

#include<stdio.h>
int main()
{
    int p=5000,r=5,t=1;
    float si;
    si=(p*r*t)/100.0;

    printf("Simple Interest  = %.2f", si);
    return 0;
}
*/


/*
4. Write a program to calculate volume of a cuboid.

#include<stdio.h>
int main()
{
    float l, b, h;
    printf("Enter length, breadth and height of cuboid: ");
    scanf("%f%f%f", &l, &b, &h);
    printf("Volume of cuboid = %.2f", l*b*h);
    return 0;
}
*/


/*
5. Write a program to ask user about the cost price and selling price banana per dozen. 
Calculate the profit or loss earned upon selling 25 bananas.

*/
#include<stdio.h>
int main()
{
    float cp=0,sp=0;
    printf("Enter cost price and selling price per dozen bananas: ");
    scanf("%f%f",&cp,&sp);

    if(sp>=cp)
        printf("The profit earned upon selling 25 bananas  = +%.2f", (sp/12 - cp/12) * 25);
    else
        printf("The loss upon selling 25 bananas  = %.2f", (sp/12 - cp/12) * 25);
    return 0;
}
