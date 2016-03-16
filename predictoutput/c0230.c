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
union test
{
    int x;
    char arr[8];
    int y;
};
 
int main()
{
    printf("%d", sizeof(union test));
    return 0;
}
