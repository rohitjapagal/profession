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
/* p points to i and q points to j */
void f(int *p, int *q)
{
  p = q;    /* p also points to j now */
 *p = 2;   /* Value of j is changed to 2 now */
}
