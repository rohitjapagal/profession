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
int f1() { printf ("Geeks"); return 1;}
int f2() { printf ("Quiz"); return 1;}
 
int main()
{
  int p = f1() + f2();
  return 0;
}
