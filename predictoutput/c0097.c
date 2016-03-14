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
  int a[] = {1, 2, 3, 4, 5, 6};
  int *ptr = (int*)(&a+1);
  printf("%d ", *(ptr-1) );
  getchar();
  return 0;
} 
