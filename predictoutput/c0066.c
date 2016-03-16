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
     char str[] = "geeksforgeeks";
     char *s1 = str, *s2 = str;     
     int i;
      
     for(i = 0; i < 7; i++)
     {
        printf(" %c ", *str);
        ++s1;     
     }
      
     for(i = 0; i < 6; i++)
     {
        printf(" %c ", *s2);
        ++s2;     
      }
     
      getchar();
      return 0;
}
