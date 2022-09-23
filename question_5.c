//5. Write a program to find greater among three numbers. If two or three numbers are\
identical and greatest among all then print it only once.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter any integer:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
      if (a>c)
      {
          printf("%d is greatest among three.",a);
      }
      else{
          printf("%d is greatest among three.",c);
      }
      
    }
    else
    {
      if(b>c)
      {
          printf("%d is greatest among three.",b);
      } 
      else
      {
          printf("%d is greatest among three.",c);
      }
    }
    getch();
    return 0;
}