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
int x = 0;
int f() 
{
   return x; 
}
 
int g() 
{ 
   int x = 1; 
   return f(); 
}
 
int main()
{
  printf("%d", g());
  printf("\n");
  getchar();
}  
