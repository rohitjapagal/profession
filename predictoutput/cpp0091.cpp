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
 
class Base {
private:
     int i, j;
public:
    Base(int _i = 0, int _j = 0): i(_i), j(_j) { }
};
class Derived: public Base {
public:
     void show(){
        cout<<" i = "<<i<<"  j = "<<j;
     }
};
int main(void) {
  Derived d;
  d.show();
  return 0;
}
