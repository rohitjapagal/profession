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
#include<stdlib.h>
#include<iostream>
 
using namespace std;
 
class Test {
public:
    void* operator new(size_t size);
    void operator delete(void*);
    Test() { cout<<"\n Constructor called"; }
    ~Test() { cout<<"\n Destructor called"; }
};
 
void* Test::operator new(size_t size)
{
    cout<<"\n new called";
    void *storage = malloc(size);
    return storage;
}
 
void Test::operator delete(void *p )
{
    cout<<"\n delete called";
    free(p);
}
 
int main()
{
    Test *m = new Test();
    delete m;
    return 0;
}
