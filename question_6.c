//6. Write a program to check whether a given character is an alphabet (uppercase), an\
alphabet (lower case), a digit or a special character.
#include<stdio.h>
#include<conio.h>
int main()
{
    char Char;
    printf("Enter any character:\n");
    scanf("%c",&Char);
    switch(Char)
    {
        case 'A'...'Z': printf("%c is an alphabet(upper case)",Char);
        break;
        case 'a'...'z': printf("%c is an alphabet(lower case)",Char);
        break;
        case '0'...'9': printf("%c is a digit",Char);
        break;
        default: printf("%c is a Special character",Char);

    }
    getch();
    return 0;
}