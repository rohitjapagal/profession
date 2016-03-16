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
void pascal f(int i,int j,int k)
{
  printf("%d %d %d",i, j, k);
}
 
void cdecl f(int i,int j,int k)
{
  printf("%d %d %d",i, j, k);
}
 
main()
{
    int i=10;
    f(i++,i++,i++);
    printf(" %d\n",i);
    i=10;
    f(i++,i++,i++);
    printf(" %d",i);
}
