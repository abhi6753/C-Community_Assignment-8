//7. Write a program which takes the length of the sides of a triangle as an input. Display\
whether the triangle is valid or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    printf("Enter sides of triangle:\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c || a+c>b || b+c>a)
    {
        printf("Triangle is valid.");
    }
    else{
        printf("Triangle is not valide.");
    }
    getch();
    return 0;
}