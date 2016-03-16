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
int fun(char *str1)
{
  char *str2 = str1;
  while(*++str1);
  return (str1-str2);
}    
 
int main()
{
  char *str = "geeksforgeeks";
  printf("%d", fun(str));
  getchar();
  return 0;
}      
