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
 int j = 0;
 for ( ; j < 10 ; )
 { 
   if (j < 10)
     printf("Geeks", j++);
   else
     continue;
   printf(“Quiz”);
 }
 return 0;
}
