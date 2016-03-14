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
# include <iostream>
# include <string.h>
using namespace std;
 
struct Test
{
  char str[20];
};
 
int main()
{
  struct Test st1, st2;
  strcpy(st1.str, "GeeksQuiz");
  st2 = st1;
  st1.str[0] = 'S';
  cout << st2.str;
  return 0;
}
