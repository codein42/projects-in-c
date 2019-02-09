//mensuration calculator

#include<stdio.h>
#include<conio.h>
#include<math.h>

float a,p;

void print(float x,float y)
{
printf("area is : %f \n parameter is: %f\n",x,y);
}

void circle()
 {
 float r;
 printf("\t\t\tCIRCLE \n Enter dimensions: \n radious :");
 scanf("%f",&r);
 a = 3.142628 * pow(r,2);
 p = 2 * 3.14 * r;
 print(a,p);
 }

void squre ()
 {
 float s;
 printf("\t\t\tSQURE \n Enter dimensions \n side :");
 scanf("%f",&s);
 a=pow(s,2);
 p=4*s;
 print(a,p);
 }


void main()
{
 int sh;
 do{
    printf("\t\t\tSHAPES MENSURATION CALCULATOR \n");
    printf("Enter shape for calculation \n 1 for Circle\n 2 for Squre \n 0 for EXIT \n");
    scanf("%d",&sh);

     switch(sh)
     {
     case 1:
     {
      circle();
      break;
     }
     case 2:
     {
      squre();
      break;
     }
     case 0:
     {
      printf("EXIT\n");
      break;
     }
     default:
     {
      printf("wrong input\n");
      break;
     }
    }
  }while (sh != 0);

 getch();
 clrscr();
}