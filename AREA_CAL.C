#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void rec(void);
void cir(void);
void squ(void);

void main()
{
 int op;
 printf("\n\t\t\tArea calculater\n ");
 printf("\nEnter \nArea_r to find area of rectangle\n Area_c to find area of circle \n Area_s for finding area of squre \n");
 do
 {
 printf("Enter choices \n");
 scanf("%d",&op);
  switch (op)
  {
   case 1:
   {
    rec();
    break;
   }
   case 2:
   {
    cir();
    break;
   }
   case 3:
   {
    squ();
    break;
   }
   case 4:
   {
    printf("EXIT POINT \n");
    break;
   }
   default :
   {
    printf("\nEnter valid operation\n");
    break;
   }
  }
 }
 while (op!=4);

 getch();
}

void rec();
{
 int Ar,l,b;
 printf("\nEnter length & breth \n");
 scanf("%d%d",&l,&b);
 Ar=i*b;
 printf("area of rectangle :%d\n",Ar);
 getch ();
}

void cir();
{
 int Ac,r;
 printf("\nEnter radious of circle\n");
 scanf("%d",&r);
 Ac=3.14*pow(r,2);
 printf("\narea of circle is:%d",Ac);
}

void squ();
{
 int As,a;
 printf("\nenter length of side of squre \n");
 scanf("%d",&a);
 As = pow(a,2) ;
 printf("\narea of squre :%d\n",As);
}






