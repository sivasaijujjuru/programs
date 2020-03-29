#include <stdio.h>
#include <stdlib.h>

int binary(int a[], int l, int r, int s) 
{ 
    while (l <= r) 
    {
        int m = l + (r - l) / 2; 
  
        if (a[m] == s) 
            return m; 
  
        else if (a[m] < s) 
            l = m + 1; 
  
        else
            r = m - 1; 
    } 
  
    return -1; 
}

int main()
{
    int a[20],i,j,n,s,r,temp;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter Array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number you want to search\n");
    scanf("%d", &s);
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    r = binary(a, 0, n-1, s);
    if(r == -1)
    printf("The number is not found in the array.\n");
    else
    printf("The number is at %dth position in the array.\n", r+1);
    
}