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
int fun(int n)
{
    int i, j, sum = 0;
    for(i = 1;i<=n;i++)
        for(j=i;j<=i;j++)
            sum=sum+j;
    return(sum);
}
 
int main()
{
    printf("%d", fun(15));
    getchar();
    return 0;
}
