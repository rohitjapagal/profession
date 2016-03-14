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
  char arr[]  = "geeksforgeeks";
  char *ptr  = arr;
 
  while(*ptr != '\0')
      ++*ptr++;
  printf("%s %s", arr, ptr);
 
  getchar();
  return 0;
}
