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
    int i = 0;
    while (i <= 4)
    {
       printf("%d", i);
       if (i > 3)
        goto inside_foo;
       i++;
    }  
    getchar();
    return 0;
}
 
void foo()
{
   inside_foo:
     printf("PP");
}
