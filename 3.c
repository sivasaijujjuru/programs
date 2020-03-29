#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],i,j,n,s,r=-1;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter Array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number you want to search\n");
    scanf("%d", &s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            r = i;
        }
    }
    if(r == -1)
    printf("The number is not found in the array.\n");
    else
    printf("The number is at %dth position in the array.\n", r+1);
}