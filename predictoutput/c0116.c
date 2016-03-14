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
#include <stdio.h>
#define R 4
#define C 4
 
void modifyMatrix(int mat[][C])
{
   mat++;
   mat[1][1] = 100;
   mat++;
   mat[1][1] = 200;
}
 
void printMatrix(int mat[][C])
{
    int i, j;
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
            printf("%3d ", mat[i][j]);
        printf("\n");
    }
}
 
int main()
{
    int mat[R][C] = { {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    printf("Original Matrix \n");
    printMatrix(mat);
 
    modifyMatrix(mat);
 
    printf("Matrix after modification \n");
    printMatrix(mat);
 
    return 0;
}
