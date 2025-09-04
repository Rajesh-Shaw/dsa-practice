/*

C Language
Assignment-17: Star Pattern Problems
Write a program to draw the following patterns:
1)

*
**
***
****
*****

2)
    *
   **
  ***
 ****
*****

3)

*****
****
***
**
*

4)

*****
 ****
  ***
   **
    *

5)

1
12
123
1234
12345

6)
1
21
321
4321

7)
ABCDE
 ABCD
  ABC
   AB
    A

8)
1
23
456
78910


9)
ABCDE
 BCDE
  CDE
   DE
    E

10)
*****
*   *
*   *
*   *
*****

*/




/*
1)

*
**
***
****
*****

i   j           J
1   1           j<=1
2   12          j<=2
3   123         j<=3
4   1234        j<=4
5   12345       j<=5

                j<=i


#include<stdio.h>
int main()
{
    int i=0,j=0,n=5;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j<=i)
                printf("*");
        }
        printf("\n");
    }
}

*/


/*
2)
    *
   **
  ***
 ****
***** 

i   j           J
1   5           j>=5 
2   45          j>=4
3   345         j>=3
4   2345        j>=2
5   12345       j>=1

                j>=6-i



#include<stdio.h>
int main()
{
    int i=0,j=0,n=5;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j>=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
*/


/*
3)

*****
****
***
**
*

i   j           J
1   12345       j<=5
2   1234        j<=4
3   123         j<=3 
4   12          j<=2
5   1           j<=1

                j<=6-i




#include<stdio.h>
int main()
{
    int i=0,j=0,n=5;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j<=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

*/


/*
4)

*****
 ****
  ***
   **
    *

i   j           J
1   12345       j>=1 
2   2345        j>=2
3   345         j>=3
4   45          j>=4
5   5           j>=5

                j>=i



#include<stdio.h>
int main()
{
    int i=0,j=0,n=5;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

*/




/*

5)

1
12
123
1234
12345


i   j           J
1   1           j<=1
2   12          j<=2
3   123         j<=3
4   1234        j<=4
5   12345       j<=5

                j<=i



#include<stdio.h>
int main()
{
    int i=0,j=0,n=5;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j<=i)
                printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }
}

*/



/*
6)
1
21
321
4321



#include<stdio.h>
int main()
{
    int i=0,j=0,n=4, k=0;
    for(i=1; i<=n; i++)
    {
        k=i;
        for(j=1; j<=n; j++)
        {
            if(j<=i)
            {
                printf("%d",k);
                k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

*/


/*
7)
ABCDE
 ABCD
  ABC
   AB
    A




#include<stdio.h>
int main()
{
    int i=0,j=0,n=5, k=0;
    for(i=1; i<=n; i++)
    {
        k='A';
        for(j=1; j<=n; j++)
        {
            if(j>=i)
            {
                printf("%c",k);
                k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

*/


/*

8)
1
23
456
78910


#include<stdio.h>
int main()
{
    int i=0,j=0,n=4, k=1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j<=i)
            {
                printf("%d",k);
                k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

*/



/*
9)
ABCDE
 BCDE
  CDE
   DE
    E




#include<stdio.h>
int main()
{
    int i=0,j=0,n=5, k=1;
    for(i=1; i<=n; i++)
    {
        k='A';
        for(j=1; j<=n; j++)
        {
            if(j>=i)
            {
                printf("%c",k);
                k++;
            }
            else
            {
                printf(" ");
                k++;
            }
        }
        printf("\n");
    }
}

*/

/*

10)
*****
*   *
*   *
*   *
*****

(*)
i   j           J
1   12345       j<=1 && j>=1
2   15          j<=1 && j>=5
3   15          j<=1 && j>=5
4   15          j<=1 && j>=5
5   12345       j<=1 && j>=1

                j<=? && j>=?


( )
i   j           J
1               
2   234         j>=2 && j<=4
3   234         j>=2 && j<=4
4   234         j>=2 && j<=4
5               

                j>=? && j<=?



*/

#include<stdio.h>
int main()
{
    int i=0,j=0,n=5, k=1;
    for(i=1; i<=n; i++)
    {
        
        for(j=1; j<=n; j++)
        {
            if(i==1 || i==5 || j==1 || j==5 )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
