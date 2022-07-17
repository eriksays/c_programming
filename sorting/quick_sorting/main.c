#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *x, int *y);
void quicksort(int array[], int length);
void quicksort_recursion(int array[], int low, int high);
int partition(int array[], int low, int high);

int main() {

    int a[] = { 7,1,3,9,0,2,4,5,8,6,45,56,45,45};
    int length = 14;

    quicksort(a, length);

    
    for ( int i = 0; i < length; i++ ) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    
    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void quicksort(int array[], int length)
{
    srand(time(NULL)); //seed random number

    quicksort_recursion(array, 0, length-1);
}

void quicksort_recursion(int array[], int low, int high)
{
    if (low < high) 
    {
        int pivot_index = partition(array, low, high);
        quicksort_recursion(array, low, pivot_index - 1);
        quicksort_recursion(array, pivot_index + 1, high);
    }
    
}

int partition(int array[], int low, int high)
{
    int pivot_index = low + (rand() % (high-low)); //generate random number between low and high

    if ( pivot_index != high)
    {
        swap(&array[pivot_index], &array[high]);
    }
    int pivot_value = array[high];
    int i = low;
    for (int j = low; j < high; j++)
    {
        if ( array[j] <= pivot_value)
        {
            swap(&array[i], &array[j]);
            i++;
        }
    }

    swap(&array[i], &array[high]);

    return i;
}
