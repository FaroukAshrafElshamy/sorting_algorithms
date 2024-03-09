#include "sort.h"

/**
 * Bubble_sort - sorts an array of integers
 * @array: an array to sort
 * @size: size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
    size_t a, b, c;
    int d;

    if (size < 2 || array == Null)
    {
        return;
    }
    b = size;
    while (b > 0)
    {
        c = 0;
        for ( a = 0; a < b -1; a++)
        {
            if (array[a + 1] < array[a])
            {
                d = array[i];
                array[a] = array[a + 1];
                array[a + 1] = d;
                c = a + 1;
                print_array(array, size);
            }
        }
        b = c;
    }
}
