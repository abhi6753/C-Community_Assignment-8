//3. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is a possitive number.\n",num);
    }
    if(num==0)
    {
        printf("Zero\n");
    }
    if(num<0)
    {
        printf("%d is a negative number.\n",num);
    }
    getch();
    return 0;
}