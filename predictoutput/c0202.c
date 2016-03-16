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
#define EVEN 0
#define ODD 1
int main()
{
    int i = 3;
    switch (i & 1)
    {
        case EVEN: printf("Even");
                break;
        case ODD: printf("Odd");
                break;
        default: printf("Default");
    }
    return 0;
}
