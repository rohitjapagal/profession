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
        unsigned int i: 1;
        unsigned int j: 2;
        unsigned int k: 3;
        unsigned int l: 4;
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
