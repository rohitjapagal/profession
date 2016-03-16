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
 
using namespace std;
 
class Test {
    int &t;
public:
    Test (int &x) { t = x; }
    int getT() { return t; }
};
 
int main()
{
    int x = 20;
    Test t1(x);
    cout << t1.getT() << " ";
    x = 30;
    cout << t1.getT() << endl;
    return 0;
}
