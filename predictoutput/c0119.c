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
  char arr[] = "geeks\0 for geeks";
  char *str = "geeks\0 for geeks";
  printf ("arr = %s, sizeof(arr) = %d \n", arr, sizeof(arr));
  printf ("str = %s, sizeof(str) = %d", str, sizeof(str));
  getchar();
  return 0;
}
