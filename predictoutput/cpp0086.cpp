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
 
class B;
class A {
    int a;
public:
    A():a(0) { }
    void show(A& x, B& y);
};
 
class B {
private:
    int b;
public:
    B():b(0) { }
    friend void A::show(A& x, B& y);
};
 
void A::show(A& x, B& y) {
    x.a = 10;
    cout << "A::a=" << x.a << " B::b=" << y.b;
}
 
int main() {
    A a;
    B b;
    a.show(a,b);
    return 0;
}
