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
#define fun(x) (x)*10
 
int main()
{
    int t = fun(5);
    int i; 
    for(i = 0; i < t; i++)
       printf("GeesforGeeks\n");
 
    return 0;
}
