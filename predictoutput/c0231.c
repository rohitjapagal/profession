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
    char arr[4];
    int y;
};
 
int main()
{
    union test t;
    t.x = 0;
    t.arr[1] = 'G';
    printf("%s", t.arr);
    return 0;
}
