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
int f(int x, int *py, int **ppz)
{ 
  int y, z; 
  **ppz += 1;  
   z  = **ppz; 
  *py += 2; 
   y = *py;
   x += 3;
   return x + y + z;
}
 
void main()
{
   int c, *b, **a;
   c = 4; 
   b = &c;
   a = &b;  
   printf( "%d", f(c,b,a));
   getchar();
}
