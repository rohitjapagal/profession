/**
 * \file   file.cpp
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
int main()
{
    int c = 5, no = 1000;
    do {
        no /= c;
    } while(c--);
 
    printf ("%d\n", no);
    return 0;
}
