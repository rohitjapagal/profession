
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
 *   The macros with arguments should be avoided as they cause problems 
 *   sometimes. And Inline functions should be preferred as there is type 
 *   checking parameter evaluation in inline functions. From C99 onward, inline 
 *   functions are supported by C language also.
 *
 * \copyright
 *   
 */

#define square(x) x*x
int main()
{
  int x = 36/square(6); // Expended as 36/6*6
  printf("%d", x);
  return 0;
}
// Output: 36

