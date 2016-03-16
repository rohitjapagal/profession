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
void fun(int *p)
{
  static int q = 10;
  p = &q;
}    
 
int main()
{
  int r = 20;
  int *p = &r;  
  fun(p);
  printf("%d", *p);
  getchar();
  return 0;
}
