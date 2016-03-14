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
 
int main()
{
   int a = 1;
   int b = 1;
   int c = a || --b;
   int d = a-- && --b;
   printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
   return 0;
}
