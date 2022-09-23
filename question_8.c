//Write a program which takes the month number as an input and display number of\
days in that month.
#include<stdio.h>
#include<conio.h>
int main()
{
    short unsigned int month;
    printf("Enter any month number between 1 to 12:\n");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
          printf("January\t 31 days");
        break;
    case 2:
          printf("February\t 28 days");
        break;
    case 3:
          printf("March\t 31 days");
        break;
    case 4:
          printf("April\t 30 days");
        break;
    case 5:
          printf("May\t 31 days");
        break;
    case 6:
          printf("June\t 30 days");
        break;
    case 7:
          printf("July\t 31 days");
        break;
    case 8:
          printf("August\t 31 days");
        break;
    case 9:
          printf("September\t 30 days");
        break;
    case 10:
          printf("October\t 31 days");
        break;
    case 11:
          printf("November\t 30 days");
        break;
    case 12:
          printf("December\t 31 days");
        break;
    default:
    printf("Please enter correct number.");
    }
    getch();
    return 0;
}