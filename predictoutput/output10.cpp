#include<iostream>

using namespace std;

int& fun();
int fun1();
int* func2();

int main()
{
int n = fun();
cout << n << endl;
int o=fun1();
cout << o << endl;
int *p=func2();
cout << *p << endl;

return 0;
}

int& fun()
{
int a = 10;

return a;
}

int fun1()
{
int a=20;
return a;
}

int* func2()
{
int* p;
p = new int;
*p = 30;
return p;
}


