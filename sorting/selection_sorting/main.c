#include <stdio.h>

void selection_sort(int a[], int length);

int main()
{
    int a[] = { 7,1,3,9,0,2,4,5,8,6 };
    int length = 10;

    selection_sort(a, length);

    for ( int i = 0; i < length; i++ ) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

void selection_sort(int a[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < length; j++ )
            if (a[j] < a[min_pos]) min_pos = j;
        
        if (min_pos != i)
        {
            //perform the swap
            int temp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = temp;
        } 
    

    }
}