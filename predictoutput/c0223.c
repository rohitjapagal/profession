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
#include "stdio.h"
int main()
{
  int i; 
  goto LOOP;
  for (i = 0 ; i < 10 ; i++)
  {
     printf("GeeksQuiz\n");
     LOOP:
      break;
  }
  return 0;
}
