#include<stdio.h>
#include<conio.h>
void main()
{
    int a=5,b=10,temp=0;
    printf("value a =",a);
    printf("value b =",b);
    temp=a;
    a=b;
    b=temp;
    printf("value a after swaping =",a);
    printf("value b after swaping =",b);
    getch();
}
