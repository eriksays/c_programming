#include <stdio.h>


void merge_sort(int a[], int length);
void merge_sort_recursion(int a[], int l, int r);
void merge_sorted_arrays(int a[], int l, int m, int r);


int main()
{

    int a[] = { 7,1,3,9,0,2,4,5,8,6};
    int length = 10;
    
    merge_sort(a, length);

    for ( int i = 0; i < length; i++ ) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

void merge_sort(int a[], int length)
{
    merge_sort_recursion(a, 0, length - 1);
}

void merge_sort_recursion(int a[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r-1) / 2; //get middle index of array
        merge_sort_recursion(a, l, m);
        merge_sort_recursion(a, m+1, r);

        merge_sorted_arrays(a, l, m, r);
    }
    
}

void merge_sorted_arrays(int a[], int l, int m, int r)
{
    int left_length = m - l + 1;
    int right_length = r - m;

    int temp_left[left_length];
    int temp_right[right_length];
    int i, j, k;

    for (int i = 0; i < left_length; i++)
        temp_left[i] = a[l+i];

    for (int i =0; i < right_length; i++)
        temp_right[i] = a[m + 1 + i];

    for (i = 0, j = 0, k = l; k <= r; k++)
    {
        
    }
}

