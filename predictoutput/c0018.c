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
# include <stdio.h> 
# define print(x)  printf ("%d", x) 
int x; 
void Q(int z) 
{ 
  z += x;
  print(z); 
} 
void P(int *y) 
{ 
  int x = *y+2; 
  Q(x); 
  *y = x-1; 
  print(x);
} 
 
main(void) 
{ 
  x=5; 
  P(&x); 
  print(x); 
  getchar();
} 
