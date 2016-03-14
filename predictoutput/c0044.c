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
# include<stdio.h>
# include<stdlib.h>
 
void fun(int *a)
{
    a = (int*)malloc(sizeof(int));
}
 
int main()
{
    int *p;
    fun(p);
    *p = 6;
    printf("%d\n",*p);
    
    getchar();
    return(0);
}
