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
  char *s[] = { "knowledge","is","power"};
  char **p;
  p = s;
  printf("%s ", ++*p);
  printf("%s ", *p++);
  printf("%s ", ++*p);
 
  getchar();
  return 0;
}
