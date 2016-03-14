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
int f(int n)
{
   static int i = 1;
   if (n >= 5)
      return n;
   n = n+i;
   i++;
   return f(n);
}
