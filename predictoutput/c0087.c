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
void fun(int **ptr_to_p)
{
  static int q = 10;
  *ptr_to_p = &q;  /*Now p of main is pointing to q*/
}    
