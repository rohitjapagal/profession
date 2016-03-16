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
    int i;
    for(i=0; str[i]; i++)
        printf("\n%c%c%c%c", str[i], *(str+i), *(i+str), i[str]);
    
    getchar();
    return 0;
}
