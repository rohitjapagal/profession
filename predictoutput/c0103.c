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
#include<stdio.h>
int main() 
{
   unsigned int x = -1;
   int y = ~0;
   if(x == y)
      printf("same");
   else
      printf("not same");
   printf("\n x is %u, y is %u", x, y);
   getchar();
   return 0;
}
