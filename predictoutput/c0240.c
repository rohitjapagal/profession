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
 struct {int i; char c;} myVar = {.c ='A',.i = 100};
 printf("%d %c",myVar.i, myVar.c);
 return 0;
}
