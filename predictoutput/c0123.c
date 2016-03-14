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
  int i, j;
  int arr[4][4] = { {1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16} };
  for(i = 0; i < 4; i++)
    for(j = 0; j < 4; j++)
      printf("%d ", j[i[arr]] );
 
  printf("\n");
 
  for(i = 0; i < 4; i++)
    for(j = 0; j < 4; j++)
      printf("%d ", i[j[arr]] );
 
  return 0;
}
