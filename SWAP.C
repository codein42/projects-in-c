//variable data swap

#include<stdio.h>
#include<conio.h>

void main()

{
 int a,b,c;
 clrscr();
 printf("Enter variable a:");
 scanf("%d",&a);
 printf("Enter variable b:");
 scanf("%d",&b);

 //operation
 c=a;
 a=b;
 b=c;
 printf("After swap\n Value of a: %d \n Value of b: %d",a,b);
 getch();
}