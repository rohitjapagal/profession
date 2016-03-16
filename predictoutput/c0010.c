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
int incr (int i)
{
   static int count = 0;
   count = count + i;
   return (count);
}
main ()
{
   int i,j;
   for (i = 0; i <=4; i++)
      j = incr(i);
}
