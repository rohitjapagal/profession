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
int main()
{
    char check = 'a';
    switch (check)
    {
        case 'a' || 1: printf("Geeks ");
         
        case 'b' || 2: printf("Quiz ");
                    break;
        default: printf("GeeksQuiz");
    }
    return 0;
}
