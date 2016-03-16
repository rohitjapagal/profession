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
#include<iostream>
#include<string.h>
using namespace std;

class String
{
    char *p;
    int len;
public:
    String(const char *a);
};

String::String(const char *a)
{
    int length = strlen(a);
    p = new char[length +1];
    strcpy(p, a);
    cout << "Constructor Called " << endl;
}

int main()
{
    String s1("Geeks");
    const char *name = "forGeeks";
    s1 = name;
    return 0;
}
