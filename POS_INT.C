//addition of positive integer from integer number
#include<stdio.h>
#include<conio.h>

 void main()
 {
  int n,i,sum=0,num;
  printf("enter number of digits\n");
  scanf("%d",&n);
  printf("Enter numbers \n");

  for (i=1;i<=n;i++)
   {
    scanf("%d",&num);
    if ( num < 0 )
    {
    break;
    }
    sum = sum + num;
   }
  printf("sum of positive numbers are: %d",sum);
  getch();
 }