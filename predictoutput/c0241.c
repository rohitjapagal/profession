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
 union {int i1; int i2;} myVar = {.i2 =100};
 printf("%d %d",myVar.i1, myVar.i2);
 return 0;
}
