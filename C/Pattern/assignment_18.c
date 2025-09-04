/*
C Language
Assignment-18: More on Star Pattern Problems
Write a program to draw the following patterns:


1)

   *   
  ***
 *****
*******


2)

*******
 *****
  ***
   *

3)

   *
  * *
 * * *
* * * *


4)
   1
  121
 12321
1234321

5)
ABCDEFG
 ABCDE
  ABC
   A


6)
ABCDCBA
 ABCBA
  ABA
   A

7)
    1
   1 1
  1 2 1
 1 2 2 1
1 2 3 2 1


8)
*******
*** ***
**   **
*     *

9)
1234321
123 321
12   21
1     1

10)
ABCDCBA
ABC CBA
AB   BA
A     A


*/




/*
1)

   *   
  ***
 *****
*******


i   j           J
1   4           j>=4 && j<=4
2   345         j>=3 && j<=5
3   23456       j>=2 && j<=6
4   1234567     j>=1 && j<=7

                j>=5-i && j<=3+i



#include<stdio.h>
int main()
{
    int i=1,j=1,n=4,k='*';

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2*n-1; j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%c",k);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    return 0;
}
*/

/*
2)

*******
 *****
  ***
   *

i   j           J
1   1234567     j>=1 && j<=7
2   23456       j>=2 && j<=6
3   345         j>=3 && j<=5
4   4           j>=4 && j<=4

                j>=i && j<=8-i




#include<stdio.h>
int main()
{
    int i=1,j=1,n=4,k='*';

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2*n-1; j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%c",k);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    return 0;
}
*/

/*
3)
   1 2 3 4
1     *
2    * *
3   * * *
4  * * * *

(* )
i   j           J
1   4           j>=4 && j<=4 
2   34          j>=3 && j<=5 
3   234         j>=2 && j<=6      
4   1234        j>=4 && j<=4

                j>=5-i && j<=3+i


#include<stdio.h>
int main()
{
    int i=1,j=1,n=4,k='*';

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%c ",k);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    return 0;
}



#include<stdio.h>
int main()
{
    int i=1,j=1,n=6,k='*';

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2*n-1; j++)
        {
            if(j >= n+1-i && j <= n-1+i && (i+j)%2==0 )
            {
                printf("%c",k);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    return 0;
}


#include <stdio.h>
int main() {
    int i, j, n=4;
    for(i=1; i<=n; i++) {
        
        for(j=1; j<=n-i; j++)
            printf(" ");
        
        for(j=1; j<=2*i-1; j++) {
            if(j % 2 == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

*/


/*
4)
   1
  121
 12321
1234321

i   j           J
1   4           j>=4 && j<=4
2   345         j>=3 && j<=5
3   23456       j>=2 && j<=6
4   1234567     j>=1 && j<=7

                j>=5-i && j<=3+i



#include<stdio.h>
int main()
{
    int i=1,j=1,n=4,k=0;

    for(i=1; i<=n; i++)
    {
        k=0;    
        for(j=1; j<=2*n-1; j++)
        {                       
            if(j>=5-i && j<=3+i)
            {
                if(j<=4)
                {
                    k++;
                    printf("%d",k);
                }
                else
                {
                    k--;
                    printf("%d",k);
                }
                
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    return 0;
}
*/

/*

5)
ABCDEFG
 ABCDE
  ABC
   A



i   j           J
1   1234567     j>=1 && j<=7
2   23456       j>=2 && j<=6
3   345         j>=3 && j<=5
4   4           j>=4 && j<=4

                j>=i && j<=8-i



#include<stdio.h>
int main()
{
    int i=1,j=1,n=4,k=0;

    for(i=1; i<=n; i++)
    {
       k='A' ; 
        for(j=1; j<=2*n-1; j++)
        {                       
            if(j>=i && j<=8-i)
            {
                printf("%c",k);
                k++;
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    return 0;
}
*/



/*

6)
ABCDCBA
 ABCBA
  ABA
   A

   
   i   j           J
1   1234567     j>=1 && j<=7
2   23456       j>=2 && j<=6
3   345         j>=3 && j<=5
4   4           j>=4 && j<=4

                j>=i && j<=8-i



#include<stdio.h>
int main()
{
    int i=1,j=1,n=4,k=0;

    for(i=1; i<=n; i++)
    {
       k=64; 
        for(j=1; j<=2*n-1; j++)
        {                       
            if(j>=i && j<=8-i)
            {
                if(j<=4)
                {
                    k++;
                    printf("%c",k);
                }
                else
                {
                    k--;
                    printf("%c",k);
                }
                               
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    
    return 0;
}

*/


/*
7)
    1_
   1_1_
  1_2_1_
 1_2_2_1_
1_2_3_2_1_



(* )
i   j           J
1   5           j>=5 && j<=5 
2   45          j>=4 && j<=5 
3   345         j>=3 && j<=5      
4   2345        j>=2 && j<=5
5   12345       j>=1 && j<=5

                j>=6-i

                    



#include<stdio.h>
int main()
{
    int i=1,j=1,n=5,k=0;

    for(i=1; i<=n; i++)
    {
        k=-2;
        for(j=1; j<=n; j++)
        {
            if(j>=6-i)
            {
                j<=4? k++ : k--; 
                printf("%d ",k);                           
            }
            else
            {
                j<=4? k++ : k--; 
                printf(" ");
            }
        }

        printf("\n");
    }
    
    return 0;
}

*/

#include <stdio.h>
int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        // leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // numbers in the row
        for (j = 1; j <= i; j++) {
            printf("%d ", j <= (i+1)/2 ? j : i - j + 1);
        }

        printf("\n");
    }

    return 0;
}



/*
8)
*******
*** ***
**   **
*     *


i   j           J
1
2   4           j>=4 && j<=4
3   345         j>=3 && j<=5
4   23456       j>=2 && j<=6

                j>=6-i && j<=2+i


#include<stdio.h>
int main()
{
    int i=1,j=1,n=4,k='*';

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2*n-1; j++)
        {
            if(j>=6-i && j<=2+i)
            {
                printf(" ");
            }
            else
            {
                printf("%c",k);
            }
        }

        printf("\n");
    }
    
    return 0;
}
*/


/*
9)
1234321
123 321
12   21
1     1



#include<stdio.h>
int main()
{
    int i=1,j=1,n=4,k=0;

    for(i=1; i<=n; i++)
    {
        k=0;
        for(j=1; j<=2*n-1; j++)
        {
            if(j>=6-i && j<=2+i)
            {
                printf(" ");
                if(j<=4)
                {
                    k++;
                }
                else
                {
                    k--;
                }
            }
            else
            {
                if(j<=4)
                {
                    k++;
                    printf("%d",k);
                }
                else
                {
                    k--;
                    printf("%d",k);
                }
            }
        }

        printf("\n");
    }
    
    return 0;
}

*/


/*
10)
ABCDCBA
ABC CBA
AB   BA
A     A



#include<stdio.h>
int main()
{
    int i=1,j=1,n=4,k=0;

    for(i=1; i<=n; i++)
    {
        k=64;
        for(j=1; j<=2*n-1; j++)
        {
            if(j>=6-i && j<=2+i)
            {
                printf(" ");
                j<=4? k++ : k--;                
            }
            else
            {
                j<=4? k++ : k--;    
                printf("%c",k);
            }
        }

        printf("\n");
    }
    
    return 0;
}

*/