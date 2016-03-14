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
#include "stdio.h"
 
int main()
{
  int i = 1, j;
  for ( ; ; )
  { 
    if (i)
        j = --i;
    if (j < 10)
       printf("GeeksQuiz", j++);
    else
       break;
  }
  return 0;
}
