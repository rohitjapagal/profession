
/**
 * \file   file.c
 * \author Rangarajan R 
 * \date   March, 2016
 * \brief  
 *   Predict the output.
 *
 * \details 
 *   The macros can take function like arguments, the arguments are not checked 
 *   for data type. For example, the following macro INCREMENT(x) can be used 
 *   for x of any data type..
 *
 * \note
 *   The notes for this file.
 *
 * \copyright
 *   
 */

#include <stdio.h>
#define INCREMENT(x) ++x
int main()
{
    char *ptr = "GeeksQuiz";
    int x = 10;
    printf("%s  ", INCREMENT(ptr));
    printf("%d", INCREMENT(x));
    return 0;
}
