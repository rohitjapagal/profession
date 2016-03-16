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
#define VAL 32
  
int main()
{
    char arr[] = "geeksquiz";
    *(arr + 0) &= ~VAL;
    *(arr + 5) &= ~VAL;
    printf("%s", arr);
     
    return 0;
}
