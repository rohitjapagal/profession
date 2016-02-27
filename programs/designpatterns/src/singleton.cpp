/**
 * \file   singleton.cpp
 * \author Rangarajan R 
 * \date   December, 2015
 * \brief  
 *   Brief description of file.
 *
 * \details 
 *   Detailed description of file.
 *
 * \note
 *   The notes for this file.
 *
 * \copyright
 *   No part of this should be published in any form without the author permission
 */
 
#include <iostream>

using namespace std;
 /* 
  * Make the class responsible for its own
  * global pointer and "initialization on
  * first use" (by using a private static
  * pointer and a public static accessor
  * method).  The client uses only the public
  * accessor method.
  */
class globalClass {
    int value;
    static globalClass *instance;
    globalClass (int v = 0) { value = v;}
    public :
    int getvalue() { return value;}
    void setvalue(int v) { value = v;}
    static globalClass* getinstance() {
	if(!instance)
	    instance = new globalClass;
    return instance;
    }
};

 /*
  * Allocating and initializing GlobalClass's
  * static data member.  The pointer is being
  * allocated - not the object inself.
  */
globalClass *globalClass::instance = 0;

void foo(void) {
    globalClass::getinstance()->setvalue(1);
    cout << "foo global ptr is " << globalClass::getinstance()->getvalue() << endl;
}

void bar(void) {
    globalClass::getinstance()->setvalue(2);
    cout << "bar global ptr is " << globalClass::getinstance()->getvalue() << endl;
}
int main() {
    cout << "main global ptr is " << globalClass::getinstance()->getvalue() << endl;
    foo();
    bar();
 return 0;
}
