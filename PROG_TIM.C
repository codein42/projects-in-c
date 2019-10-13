#include <stdio.h>
#include <conio.h>

void main ()
{
 int n,i,t[50],av=0;
 clrscr();
 printf("Enter Number of program: ");
 scanf("%d",&n);

 //input time for each program
 for (i=1;i<=n;i++)
 {
 printf("\Enter time for program %d: ",i);
 scanf("%d",&t[i]);
 }

 //printing user input data
 printf("\nTime for each program \n");
 for (i=1;i<=n;i++)
 {
  printf("Program %d \t time %d \n",i,t[i]);
 }

 //calculations
 for (i=1;i<=n;i++)
 {
  av = av + t[i];
 }

 printf("\nTotal time: %d\n",av);
 av = av / n;
 printf("\nAverage time: %d",av);

 getch();
}