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
int fun(int n)
{
    static int s = 0;
    s = s + n;
    return (s);
}
 
int main()
{
    int i = 10, x;
    while (i > 0)
    {
        x = fun(i);
        i--;
    }
    printf ("%d ", x);
    return 0;
}
