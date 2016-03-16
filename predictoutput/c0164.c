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
int main() 
{ 
  int x = 10; 
  static int y = x; 
   
  if(x == y) 
     printf("Equal"); 
  else if(x > y) 
     printf("Greater"); 
  else
     printf("Less"); 
  return 0; 
}
