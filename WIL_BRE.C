//switch
#include<stdio.h>
#include<conio.h>

void main()
{
 int n;
 do{
 scanf("%d",&n);
 switch(n)
 {

  case 1:
  printf("sdfgsdghsd\n");
  break ;

  case 2:
  printf("sdfgyrthjdrtyjsdghsd\n");
  break ;

  case 3:
  printf("sdfgysdthrthjdrtyjsdghsd\n");
  break ;

  case 0:
  printf("exit\n");
  break ;

  default :
  printf("wrong input");
  break ;

 }
 }while(n != 0);
 getch();

}

