/*
C Language
Assignment-20: switch case control
1. Write a program to find and display grade obtained by a student in a test. Grading specifications are as follows:
    Marks from 90 to 100:
    Grade A
    Marks from 80 to less than 90: Grade B
    Marks from 70 to less than 80: Grade C
    Marks from 60 to less than 70: Grade D
    Marks from 50 to less than 60: Grade E
    Marks below 50: Grade F
    Marks greater than 100 or less than 0: Invalid Marks

2. Write a menu driven program with the following options:
    1. Factorial of a number
    2. Check Even and Odd
    3. Area of circle
    4. Sum of first N natural numbers.
    5. Exit

3. Write a program to check whether a given character is uppercase alphabet or lower case alphabet or some other special character, using switch case statement.

4. Write a program to check whether a given character is vowel or consonant or some other special character, using switch case statement.

5. Write a menu driven program with the following options:
    1. Calculate LCM of two numbers
    2. Calculate sum of the digits of a number
    3. Volume of a cuboid
    4. Check whether a given number is Prime or not
    5. Exit

*/


/*
switch case control
1. Write a program to find and display grade obtained by a student in a test. Grading specifications are as follows:
    Marks from 90 to 100:
    Grade A
    Marks from 80 to less than 90: Grade B
    Marks from 70 to less than 80: Grade C
    Marks from 60 to less than 70: Grade D
    Marks from 50 to less than 60: Grade E
    Marks below 50: Grade F
    Marks greater than 100 or less than 0: Invalid Marks


#include<stdio.h>
int main()
{
    int m;
    printf("Enter Marks : ");
    scanf("%d",&m);

    if(m < 0 || m > 100)
    {
        printf("Invalid Marks! Please Enter Valid Marks");
    }
    else
    {
        switch(m/10)
        {
            case 10 :
            case 9  :
                printf("Grade A");
                break;
            case 8 :
                printf("Grade B");
                break;
            case 7 :
                printf("Grade C");
                break;
            case 6 :
                printf("Grade D");
                break;
            case 5 :
                printf("Grade E");
                break;
            default:
                printf("Grade F");
        }
    }
    return 0;
}

*/

/*
2. Write a menu driven program with the following options:
    1. Factorial of a number
    2. Check Even and Odd
    3. Area of circle
    4. Sum of first N natural numbers.
    5. Exit


#include<stdio.h>
int main()
{
    int choice=0, n=0;
    while(1)
    {
        printf("Enter Your choice : ");
        scanf("%d",&choice);

        printf("\n\n==========Menu=========\n");
        printf("1. Factorial of a number \n");
        printf("2. Check Even and Odd \n");
        printf("3. Area of circle \n");
        printf("4. Sum of first N natural numbers. \n");
        printf("5. Exit \n");
        printf("==================\n");



        if(choice == 5)
        {
            printf("Existing Program...........Bye :).");
            break;
        }
        
        switch(choice)
        {
            case 1:
                int f=1, i=1; 
                printf("Enter a Number : ");
                scanf("%d",&n);
                for(i;i<=n;i++)
                    f=f*i;
                printf("Factorial of %d is %d\n",n,f);
                break;
            
            case 2:
                printf("Enter a Number : ");
                scanf("%d",&n);
                if(n%2)
                    printf("Give Number %d is an Odd number\n",n);
                else    
                    printf("Give Number %d is an Even number\n",n);
                break;
            
            case 3:
                printf("Enter The Radius of Circle : ");
                scanf("%d",&n);
                
                printf("Area of cirle is %0.2f\n",3.14*n*n);
                break;

            case 4:
                printf("Enter The Number : ");
                scanf("%d",&n);
                
                printf("Sum of First %d natural numbers = %d\n",n,n*(n+1)/2);
                break;
            
            default :
                printf("Enter Valid Number.");
        }
    }
    return 0;
}
*/

/*
3. Write a program to check whether a given character is uppercase alphabet or lower case alphabet or some other special character, using switch case statement.



#include<stdio.h>
int main()
{
    char c;
    printf("Enter a Character : ");
    scanf("%c",&c);

    switch(1)
    {
        case 1:
            if(c >='A' && c<= 'Z')
                printf("The character '%c' is an Uppercase Alphabet.\n", c);
            else if(c >= 'a' && c <= 'z')
                printf("The character '%c' is a Lowercase Alphabet.\n", c);
            else
                printf("The character '%c' is a Special Character.\n", c);
            break;

    }
    return 0;
}
*/



/*
4. Write a program to check whether a given character is vowel or consonant or some other special character, using switch case statement.

*/

#include<stdio.h>
int main()
{
    char c;
    printf("Enter a Character : ");
    scanf("%c",&c);

    switch(c)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("The character '%c' is a Vowel.\n", c);
            break;

        default:
            if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
                printf("The character '%c' is a Consonant.\n", c);
            else
                printf("The character '%c' is a Special Character.\n", c);
    }

    return 0;
}


/*
5. Write a menu driven program with the following options:
    1. Calculate LCM of two numbers
    2. Calculate sum of the digits of a number
    3. Volume of a cuboid
    4. Check whether a given number is Prime or not
    5. Exit




#include<stdio.h>
int main()
{
    int choice=0, n=0;
    while(1)
    {
        printf("Enter Your Choice : ");
        scanf("%d",&choice);

        printf("\n\n==========Menu=========\n");
        printf("1. Calculate LCM of two numbers \n");
        printf("2. Calculate sum of the digits of a number \n");
        printf("3. Volume of a cuboid \n");
        printf("4. Check whether a given number is Prime or not. \n");
        printf("5. Exit \n");
        printf("==================\n");



        if(choice == 5)
        {
            printf("Existing Program...........Bye :).");
            break;
        }
        
        switch(choice)
        {
            case 1:
                {
                    int a=0, b=0, i=0, lcm=0; 
                    printf("Enter two Number : ");
                    scanf("%d%d",&a,&b);
                    if(a>b)
                        lcm=a;
                    else
                        lcm=b;

                    for(i=lcm;i<=a*b;i++)
                    {
                        if(i%a==0 && i%b==0)
                        {
                            lcm=i;
                            break;
                        }
                    }
                    printf("LCM of two numbers %d, %d is %d\n",a,b,lcm);
                    break;
                }
            
            case 2:
                {
                    int num=0,sum=0,r=0;
                    printf("Enter a Number : ");
                    scanf("%d",&n);
                    num=n;
                    while(num)
                    {
                        r=num%10;
                        sum=sum+r;
                        num=num/10;
                    }
                    printf("Sum of the digits of a number %d is %d\n",n,sum);
                    break;
                }
            
            case 3:
                {
                    int a,b,c;
                    printf("Enter Length, breadth and Height of Cuboid : ");
                    scanf("%d%d%d",&a,&b,&c);
                    
                    printf("Volume of a cuboid is %d\n",a*b*c);
                    break;
                }

            case 4:
                {
                    int isPrime=1,i=0;
                    printf("Enter The Number : ");
                    scanf("%d",&n);

                    for(i=2; i*i<=n; i++)
                    {
                        if(n%i==0)
                        {
                            isPrime=0;
                            break;
                        }
                    }
                    
                    if(isPrime)
                        printf("Given number %d is a Prime number.\n",n);
                    else
                        printf("Given number %d is not a Prime number.\n",n);

                    break;
                }
            
            default :
                printf("Enter Valid Number.");
        }
    }
    return 0;
}

*/