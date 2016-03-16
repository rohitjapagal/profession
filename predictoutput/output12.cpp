#include <iostream>
#include<string>
 
using namespace std;
 
class Pet {
public:
    virtual string getDescription() const {
        return "This is Pet class";
    }
};
 
class Dog : public Pet {
public:
    virtual string getDescription() const {
        return "This is Dog class";
    }
};
 
void describe(const Pet &p) { // Doesn't slice the derived class object.
    cout<<p.getDescription()<<endl;
}
 
int main() {
    Dog d;
    describe(d);
    return 0;
}
