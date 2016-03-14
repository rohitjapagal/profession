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
int main(void)
{
    struct str
    {
        int i: 1;
        int j: 2;
        int k: 3;
        int l: 4;
    };
 
    struct str s;
 
    s.i = 1;
    s.j = 2;
    s.k = 5;
    s.l = 10;
 
    printf(" i: %d \n j: %d \n k: %d \n l: %d \n", s.i, s.j, s.k, s.l);
 
    getchar();
    return 0;
}
