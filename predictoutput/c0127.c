/**
 * \file   file.c
 * \author Rangarajan R 
 * \date   March, 2016
 * \brief  
 *   Predict the output.
 *
 * \details 
 *   Detailed description of file.
 *
 * \note
 *   The notes for this file.
 *
 * \copyright
 *   
 */
#include <stdio.h>
 
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
 
int main(void)
{
    int i;
    int arr[] = {1, 2, 3, 4, 5};
 
    for (i = -1; i < ARRAY_SIZE(arr) - 1; ++i)
        printf("%d ", arr[i + 1]);
 
    printf("\n");
 
    return 0;
}
