/* 10.Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float p,ch,b,m,c,total,per;
    printf("Enter your 5 subject marks:\n");
    scanf("%f%f%f%f%f",&p,&ch,&b,&m,&c);
    total = p+ch+b+m+c;
    per = total/5.0;
    if(per>=90)
    {
        printf("Grade A");
    }
    if(per>=80)
    {
        printf("Grade B");
    }
    if(per>=70)
    {
        printf("Grade C");
    }
    if(per>=60)
    {
        printf("Grade D");
    }
    if(per>=40)
    {
        printf("Grade E");
    }
    if(per<40)
    {
        printf("Grade F");
    }
    getch();
    return 0;

}
