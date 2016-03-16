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
    int a = 5;
    switch(a)
    {
    default:
        a = 4;
    case 6:
        a--;
    case 5:
        a = a+1;
    case 1:
        a = a-1;
    }
    printf("%d \n", a);
    return 0;
}
