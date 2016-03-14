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
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr1 = arr;
    int *ptr2 = arr + 5;
    printf ("ptr2 - ptr1 = %d\n", ptr2 - ptr1);
    printf ("(char*)ptr2 - (char*) ptr1 = %d",  (char*)ptr2 - (char*)ptr1);
    getchar();
    return 0;
}
