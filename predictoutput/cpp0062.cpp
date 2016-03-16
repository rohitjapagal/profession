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
class Test
{
public:
    int i;
    void get();
};
void Test::get()
{
    std::cout << "Enter the value of i: ";
    std::cin >> i;
}
Test t;  // Global object
int main()
{
    Test t;  // local object
    t.get();
    std::cout << "value of i in local t: "<<t.i<<'\n';
    ::t.get(); 
    std::cout << "value of i in global t: "<<::t.i<<'\n';
    return 0;
}
