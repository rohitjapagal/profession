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
void reverse(void); /* function prototype */
 
void reverse(void)
 {
  int c;
  if (((c = getchar()) != '\n')) 
    reverse();  
  putchar(c);
}
main()
{
  printf ("Enter Text ") ;
  printf ("\n") ;
  reverse();
  printf ("\n") ;
  getchar();
}
