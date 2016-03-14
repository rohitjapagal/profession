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
# include <stdio.h>
int main()
{
    int x = 10;
    int y = 20;
    x += y += 10;
    printf (" %d %d", x, y);
    return 0;
}
