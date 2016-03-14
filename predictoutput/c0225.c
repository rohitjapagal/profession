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
#include‹stdio.h›
int main()
{
    struct site
    {
        char name[] = "GeeksQuiz";
        int no_of_pages = 200;
    };
    struct site *ptr;
    printf("%d ", ptr->no_of_pages);
    printf("%s", ptr->name);
    getchar();
    return 0;
}
