#include<iostream>
using namespace std;

class A
{
public:
virtual void display(int data = 10){
cout<< "A : " << data << endl;
}
};

class B : public A
{
public:
void display(int data1 = 20){
cout<< "B : "<< data1 << endl;
}
};

int main() {
     A *a = new B;
     a->display();
    return 0;
}
