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
    char arr[] = "geeksforgeeks";
    char *ptr1 = arr;
    char *ptr2 = ptr1 + 3;
    printf ("ptr2 - ptr1 = %d\n", ptr2 - ptr1);
    printf ("(int*)ptr2 - (int*) ptr1 = %d",  (int*)ptr2 - (int*)ptr1);
    getchar();
    return 0;
}
