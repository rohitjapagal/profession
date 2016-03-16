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
 
class Test1
{
    int x;
public:
    void show() {  }
};
 
class Test2
{
    int x;
public:
    virtual void show() {  }
};
 
int main(void)
{
    cout<<sizeof(Test1)<<endl;
    cout<<sizeof(Test2)<<endl;
    return 0;
}
