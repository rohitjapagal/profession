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
int main(void)
{
  int a = 1;
  int b = 0;
  b = ++a + ++a;
  printf("%d %d",a,b);
  getchar();
  return 0;
}
