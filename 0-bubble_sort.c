#include "sort.h"

/**
 * Bubble_sort - sorts an array of integers
 * @array: an array to sort
 * @size: size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
    size_t i, c;
    int temp;

    if (size < 2 || !array)
    {
        return;
    }

    while (true)
    {
        c = 0;
        for (i = 0; i < size - 1;i++)
        {
            if (array[i + 1] < array[i])
            {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                c = i + 1;
                print_array(array, size);
            }
        }

        if ( c == 0)
        {
            break;
        }
    }
}
