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
int main()
{
   char str[]= "geeks\nforgeeks";
   char *ptr1, *ptr2;
      
   ptr1 = &str[3];
   ptr2 = str + 5;
   printf("%c", ++*str - --*ptr1 + *ptr2 + 2); 
   printf("%s", str); 
  
   getchar();
   return 0;
}
