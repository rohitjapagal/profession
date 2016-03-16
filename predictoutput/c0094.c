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
int main()
{
  int f = 0, g = 1;
  int i;
  for(i = 0; i < 15; i++) 
  {
    printf("%d \n", f);
    f = f + g;
    g = f - g;
  }
  getchar();
  return 0;
}
