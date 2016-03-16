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
#define f(g,g2) g##g2
int main()
{
   int var12 = 100;
   printf("%d", f(var,12));
   getchar();
   return 0;
}
