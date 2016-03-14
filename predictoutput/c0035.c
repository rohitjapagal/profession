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
#include <stdlib.h>
#include <stdio.h>
enum {false, true};
int main()
{
   int i = 1;
   do
   {
     printf("%d\n", i);
     i++;
     if (i < 15)
       break;
     } while (true);
 
     getchar();
     return 0;
}
