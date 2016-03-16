#include<iostream>
using namespace std;

int main()

{

int a =10;

int b = 20;

int &aRef = a;

aRef = b;

b =30;
// Print aRef, a and b
return 0;

}
