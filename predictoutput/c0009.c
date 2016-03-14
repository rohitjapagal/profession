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
[PI] int * g (void) 
{ 
  int x = 10; 
  return (&x); 
} 
 
[P2] int * g (void) 
{ 
  int * px; 
  *px = 10; 
  return px; 
}
  
[P3] int *g (void) 
{ 
  int *px; 
  px = (int *) malloc (sizeof(int)); 
  *px = 10;
  return px; 
} 
