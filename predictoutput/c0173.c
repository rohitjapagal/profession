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
void foo(void)
{
 static int staticVar;
 staticVar++;
 printf("foo: %d\n",staticVar);
}
 
void bar(void)
{
 static int staticVar;
 staticVar++;
 printf("bar: %d\n",staticVar);
}
 
int main()
{
 foo(), bar(), foo();
 return 0;
}
