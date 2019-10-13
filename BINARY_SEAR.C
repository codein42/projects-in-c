/* Program to Search an Element using BInary Search */
 
#include <stdio.h>
/* Function Prototype Declaration */
void binary_search();
 
/* Global Declaration of Variables */
int a[50], n, item, loc, beg, mid, end, i;
 
/* We used main() because it's a C-Compiler.
   Use void main() or int main() if necessary  */
 
main()
{
    printf("\nEnter size of an array: ");
    scanf("%d", &n); // Reading Size of an Array.
 
    printf("\nEnter elements of an array in sorted form:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);  //Read Array values one by one.
 
    printf("\nEnter ITEM to be searched: ");
    scanf("%d", &item);
 
    /* Calling Function - No Arguments Passing */
    binary_search();
    getch();
}
void binary_search()  //called Function - Dont Return Anything.
{
    /* Binary Search Logic */
     
    beg = 0;
    end = n-1;
    mid = (beg + end) / 2;
    while ((beg<=end) && (a[mid]!=item))
    {
        if (item < a[mid])
            end = mid - 1;
        else
            beg = mid + 1;
        mid = (beg + end) / 2;
    }
    if (a[mid] == item)
        printf("\n\nITEM found at location %d", mid+1);
    else
        printf("\n\nITEM doesn't exist");
}