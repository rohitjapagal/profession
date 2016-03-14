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
int fun()
{
  static int num = 16;
  return num--;
}
 
int main()
{
  for(fun(); fun(); fun())
    printf("%d ", fun());
  return 0;
}
