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
 
int main(void)
{
    int i;
    int power_of_ten[5] = {
                            00001,
                            00010,
                            00100,
                            01000,
                            10000,
                        };
     
    for (i = 0; i < 5; ++i)
        printf("%d ", power_of_ten[i]);
    printf("\n");
     
    return 0;
}
