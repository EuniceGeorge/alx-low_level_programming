include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integer
 *
 * @array: pointer to the first element of the array 
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: Mid on success, else -1
 */

int binary_search(int *array, size_t size, int value)
{
        size_t s = 0;
        size_t e = size -1;
        size_t mid, i;

        if (size == 0)
                return (-1);

        while (s <= e)
        {
                printf("Searching in array: ");
                for (i = s; i <= e; i++){
                        printf("%d", array[i]);
                        if (i < e)
                                printf(",");
                }
                printf("\n");
                mid = (s + e)/2;

                        if (array[mid] == value)
                                return (mid);

                        else if (array[mid] < value)
                                s = (mid + 1);

                        else if (array[mid] > value)
                                e = (mid - 1);
                        else
                                return (mid);
                }
        return (-1);
}

