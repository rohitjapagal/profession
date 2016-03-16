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
    char a[2][3][3] = {'g','e','e','k','s','f','o',
                           'r','g','e','e','k','s'};
    printf("%s ", **a);
    getchar();
    return 0;
}
