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
 
int * gPtr;
 
int main()
{
 int * lPtr = NULL;
 
 if(gPtr == lPtr)
 {
   printf("Equal!");
 }
 else
 {
  printf("Not Equal");
 }
 
 return 0;
}
