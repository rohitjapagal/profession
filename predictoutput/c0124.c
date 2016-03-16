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
    int a[2][3] = {2,1,3,2,3,4};
    printf("Using pointer notations:\n");
    printf("%d %d %d\n", *(*(a+0)+0), *(*(a+0)+1), *(*(a+0)+2));
    printf("Using mixed notations:\n");
    printf("%d %d %d\n", *(a[1]+0), *(a[1]+1), *(a[1]+2));
    return 0;
}
