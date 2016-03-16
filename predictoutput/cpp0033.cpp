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
 
class A
{
    int id;
public:
    A (int i) { id = i; }
    void print () { cout << id << endl; }
};
 
int main()
{
    A a[2];
    a[0].print();
    a[1].print();
    return 0;
}
