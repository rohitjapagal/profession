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
  typedef int *i;
  int j = 10;
  i *a = &j;    
  printf("%d", **a);
  getchar();
  return 0;
}    
