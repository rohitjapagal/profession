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
#define TOTAL_ELEMENTS (sizeof(array) / sizeof(array[0]))
int array[] = {1, 2, 3, 4, 5, 6, 7};
 
int main()
{
 int i;
 
 for(i = -1; i <= (TOTAL_ELEMENTS-2); i++)
   printf("%d\n", array[i+1]);
 
 getchar();
 return 0;
}
