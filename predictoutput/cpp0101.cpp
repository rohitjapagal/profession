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
#include <iostream>
using namespace std;
int main()
{
    const char* p = "12345";
    const char **q = &p;
    *q = "abcde";
    const char *s = ++p;
    p = "XYZWVU";
    cout << *++s;
    return 0;
}
