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
    enum channel {star, sony, zee};
    enum symbol {hash, star};
 
    int i = 0;
    for(i = star; i <= zee; i++)
    {
        printf("%d ", i);
    }
 
    return 0;
}
