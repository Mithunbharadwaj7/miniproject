
#include <stdio.h>

void  pyramid();
void pyramid( );
void square();
void ladder();
void hollowsquare();
void diamond();

int main()
{ int n;
    printf("***Pattern Printing***\n");
    printf("Enter 1 for pyramid pattern\n");
    printf("Enter 2 for  inverted pyramid pattern\n");
    printf("Enter 3 for square pattern\n");
    printf("Enter 4 for hollow square pattern\n");
    printf("Enter 5 for ladder pattern\n");
    printf("Enter 6 for diamond pattern\n");
    scanf("%d",&n);
    if (n==1)
      pyramid();
      else if (n==2)
      invertedpyramid();
      else if (n==3)
      square();
      else if(n==4)
      hollowsquare();
      else if(n==5)
      ladder();
      else if(n==6)
      diamond();
      else
      printf(" **Enter valid number**");
      
    
}
void pyramid( )
{
    for( int i=1;i<=5;i++)
    {
       for( int j=1;j<=(5-i);j++)
          {
         printf(" ");
          }
       for(int l=1;l<=((2*i)-1);l++)
          {
         printf("*");
          }
     printf("\n");
    }
    
}
void invertedpyramid()
{
    for (int i=1;i<=5;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for (int l=1;l<=((2*5)-(2*i-1));l++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void square()
{
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void ladder()
{
    for (int i=1;i<=11;i++)
    {
        for (int j=1;j<=5;j++)
        {
            if (i%3==0)
            {
                printf("*");
            }
            else if (j==1||j==5)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
void hollowsquare()
{
    for(int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            if(i==1 || i==5 || j==1 || j==5)
            printf("*");
        
        else
        printf(" ");
        }
        printf("\n");
    }
    
}
void diamond()
{
    for( int i=1;i<=5;i++)
    {
       for( int j=1;j<=(5-i);j++)
          {
         printf(" ");
          }
       for(int l=1;l<=((2*i)-1);l++)
          {
         printf("*");
          }
     printf("\n");
    }
     for (int i=1;i<=5;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for (int l=1;l<=((2*5)-(2*i-1));l++)
        {
            printf("*");
        }
        printf("\n");
    }
   
}



