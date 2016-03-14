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
char *fun()
{
    static char arr[1024];
    return arr;
}
 
int main()
{
    char *str = "geeksforgeeks";
    strcpy(fun(), str);
    str = fun();
    strcpy(str, "geeksquiz");
    printf("%s", fun());
    return 0;
}
