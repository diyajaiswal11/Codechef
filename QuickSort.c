#include <stdio.h>
#include <time.h>

void swap(int *a, int *b) 
{
    *a = *a ^ *b ^ (*b = *a);
}

int QSPartation(int array [], int start, int end)
{
    int p = start, pivot = array[end];

    for (int i=start; i<end; i++)
    {
        if (array[i] < pivot) 
        {
            swap(&array[i],&array[p]);
            p++;
        }
    }
    swap(&array[end],&array[p]);
    return p;
}

void QuickSort(int array[], int start, int end) 
{
    if ( start < end) 
    {
        int p = QSPartation(array,start,end);
        QuickSort(array, start, p-1);
        QuickSort(array, p+1, end);
    }
}

int main(void)
{
    clock_t start, end;
    int n;

    printf("Enter the length of the array : ");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d elements of the array :\n",n);
    for (int i=0; i<n; i++)
        scanf("%d",&array[i]);

    start = clock();
    QuickSort(array,0,n-1);
    end = clock();

    printf("\n-- Sorted array --\n");
    for (int i=0; i<n; i++)
        printf("%d ",array[i]);

    printf("\n\nTime of Execution : %ld\n",(end-start)/CLOCKS_PER_SEC);

}