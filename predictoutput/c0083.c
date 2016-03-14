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
int fun(int n, int *fg)
{
   int t, f;
   if(n <= 1)
   {
     *fg = 1;
      return 1;
   }
   t = fun(n-1, fg);
   f = t + *fg;
   *fg = t;
   return f;
}
int main( )
{
  int x = 15;
  printf ( "%d\n", fun (5, &x));
  getchar();
  return 0;
}
