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
 struct {int a[2], b;} arr[] = {[0].a = {1}, [1].a = {2}, [0].b = 1, [1].b = 2};
 
 printf("%d %d %d and",arr[0].a[0],arr[0].a[1],arr[0].b);
 printf("%d %d %d\n",arr[1].a[0],arr[1].a[1],arr[1].b);
 
 return 0;
}
