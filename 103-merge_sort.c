#include "sort.h"


/**
 * Merge sort - sorts an array of integers in ascending order
 * using the top-down merge sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void merge_sort(int *array, size_t size)
{
    if (size < 2 || !array)
        return;
    else
        merge_sort_recursion(array, 0, size - 1);
}

void merge_sort_recursion(int *array, int left, int right)
{
    int mid = ((right - left) / 2) + left;
    // int mid = left + (right - left) / 2;

    if (right <= left)
        return;
    else
    {
        merge_sort_recursion(array, left, mid);
        merge_sort_recursion(array, mid + 1, right);
        merge_sorted_arrays(array, left, mid, right);
    }
}

void merge_sorted_arrays(int *array, int left, int mid, int right)
{
    int left_length = mid - left + 1;
    int right_length = right - mid;
    int temp_left[left_length];
    int temp_right[right_length];

    int i, j, k;

    for (i = 0; i < left_length; i++)
        temp_left[i] = array[left + i];

    for (i = 0; i < right_length; i++)
        temp_right[i] = array[mid + 1 + i];

    i = 0;
    j = 0;
    k = left;
    while (i < left_length && j < right_length)
    {
        if (temp_left[i] <= temp_right[j])
        {
            array[k] = temp_left[i];
            i++;
        }
        else
        {
            array[k] = temp_right[j];
            j++;
        }
        k++;
    }

    while (i < left_length)
    {
        array[k] = temp_left[i];
        i++;
        k++;
    }

    while (j < right_length)
    {
        array[k] = temp_right[j];
        j++;
        k++;
    }
    // for (i = 0, j = 0, k = left; k <= right; k++)
    // {
    //     if (((i < left_length)
    //         && (j >= right_length)) || (temp_left[i] <= temp_right[j]))
    //     {
    //         array[k] = temp_left[i];
    //         i++;
    //     }
    //     else
    //     {
    //         array[k] = temp_right[j];
    //         j++;
    //     }
    // }
}

// void merge_sort_recursion(int *array, int left, int right);
// void merge_sorted_arrays(int *array, int left, int mid, int right);
