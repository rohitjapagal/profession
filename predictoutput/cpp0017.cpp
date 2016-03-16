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
 
class X {
private:
  static const int a = 76;
public:
  static int getA() { return a; }
};
 
int main() {
  cout <<X::getA()<<endl;
  return 0;
}
