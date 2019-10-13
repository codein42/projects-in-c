//loops in c

#include<stdio.h>
#include<conio.h>

//using for loop
void loop1 (int a)
{
 int i,sum=0;
 for (i=1;i<=a;i++)
 {
  sum = sum + i;
 }
 printf("sum using for loop is: %d\n",sum);
}

//using while loop
void loop2 (int a)
{
 int i=1,sum=0;
 while (i<=a)
 {
  sum = sum + i;
  i++;
 }
 printf("sum using while loop is: %d\n",sum);

}

//using do while loop
void loop3 (int a)
{
 int i=1,sum=0;
 do{
  sum = sum + i;
  i++;
 } while (i<=a);
 printf("sum using do while loop is: %d\n",sum);
}

void main ()
{
 int n ;
 clrscr();
 printf("Enter any number for sum\n");
 scanf("%d",&n);
 loop1 (n);
 loop2 (n);
 loop3 (n);
 getch();
}



