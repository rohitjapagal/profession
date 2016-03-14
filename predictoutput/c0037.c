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
char *getString()
{
    char str[] = "Will I be printed?";    
    return str;
}
int main()
{
    printf("%s", getString());
    getchar();
}
