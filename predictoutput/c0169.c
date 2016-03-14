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
 
int main(void)
{
    int i = 10;
    const int *ptr = &i;
    *ptr = 100;
    printf("i = %d\n", i);
    return 0;
}
