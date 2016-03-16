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
    int value;
public:
    Test (int v = 0) {value = v;}
    int getValue() { return value; }
};
 
int main() {
    const Test t;  
    cout << t.getValue();
    return 0;
}
