#include<stdio.h>
#include<stdlib.h>

void quick_sort(int a[], int l, int r)
{
    int pivot, left, right, temp,i;
    left = l;
    right = r;
    do
    {
        for(pivot = a[l], i= 0; i<= r; i++) 
        {
            if (a[i] > pivot) 
            {
                left = i;
                break;
            }
        }
        for(i = r; i >= 0;i--)
        {
            if(a[i] <= pivot)
            {
                right = i;
                break;
            }
        }
        if (left < right) 
        {
            temp = a[left];
            a[left] = a[right];
            a[right] = temp;
        }
        else
        {
            temp = a[right];
            a[right] = a[l];
            a[l] = temp;
        }
        if (l < right - 1)
        quick_sort(a,l,right-1);
        if (right + 1 < r)
            quick_sort (a, right +1, r);
        }
        while (left < right);
}

void main() 
{
    int a[20],n,i;
    
    printf("How many elements you want to enter\n");
    scanf("%d",&n);
    printf("Given array elements\n");
    for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    quick_sort(a,0,n-1);
    printf("After sorting elements are\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}
