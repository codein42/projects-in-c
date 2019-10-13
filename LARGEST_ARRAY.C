#include<stdio.h>
#include<conio.h>
void main()
{
    int a[15],i,n,largest;
    //clrscr();
 
    printf("\n Enter Total Number of Elements in an Array upto 15 :");
    scanf("%d",&n);
 
    printf("\n Enter all the values till %d: ",n);
    for(i=0; i < n; i++)
        scanf("%d",&a[i]);
 
    largest = a[0];
 
    for(i = 0 ; i < n ; i++)
    {
        if ( a[i] > largest )
            largest = a[i];
    }
 
 
    printf("\n The largest Element in array is: %d",largest);
 
    getch();
}