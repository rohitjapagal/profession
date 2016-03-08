#include <iostream>

using namespace std;
int    m (int a, int b) { return a+b; }  
     int    main() { 
        std::cout << m(1,2 ) << endl;
        int    m (int a, int b =10);
        std::cout << m(1 ) << endl;
    //again: 
        int    m (int a= 20, int b ) ;         //default for b is not supplied here
        std::cout << m() << endl;
    }
 
