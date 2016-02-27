/**
 * \file   vector-test.cpp
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
#include "../inc/vectortest.h"
using namespace std;

/*

Member functions

(constructor)
    Construct vector (public member function )

(destructor)
    Vector destructor (public member function )

operator=
    Assign content (public member function )


Iterators:

begin
    Return iterator to beginning (public member function )

end
    Return iterator to end (public member function )

rbegin
    Return reverse iterator to reverse beginning (public member function )

rend
    Return reverse iterator to reverse end (public member function )

cbegin
    Return const_iterator to beginning (public member function )

cend
    Return const_iterator to end (public member function )

crbegin
    Return const_reverse_iterator to reverse beginning (public member function )

crend
    Return const_reverse_iterator to reverse end (public member function )


Capacity:

size
    Return size (public member function )

max_size
    Return maximum size (public member function )

resize
    Change size (public member function )

capacity
    Return size of allocated storage capacity (public member function )

empty
    Test whether vector is empty (public member function )

reserve
    Request a change in capacity (public member function )

shrink_to_fit
    Shrink to fit (public member function )


Element access:

operator[]
    Access element (public member function )

at
    Access element (public member function )

front
    Access first element (public member function )

back
    Access last element (public member function )

data
    Access data (public member function )


Modifiers:

assign
    Assign vector content (public member function )

push_back
    Add element at the end (public member function )

pop_back
    Delete last element (public member function )

insert
    Insert elements (public member function )

erase
    Erase elements (public member function )

swap
    Swap content (public member function )

clear
    Clear content (public member function )

emplace
    Construct and insert element (public member function )

emplace_back
    Construct and insert element at the end (public member function )


Allocator:

get_allocator
    Get allocator (public member function )


Non-member function overloads

relational operators
    Relational operators for vector (function template )

swap
    Exchange contents of vectors (function template )


Template specializations

vector<bool>
    Vector of bool (class template specialization )


*/
/* class TestVector functions*/
TestVector::TestVector(void) {
    cout << "Inside constructor of TestVector - default" << endl;
    a = 0;
    ptr = NULL;

}

TestVector::TestVector(int a) {
   cout << "Inside constructor of TestVector" << endl;
   this->a = a;
}

int TestVector::getA(void){
return a;
}

TestVector::~TestVector(void)
{
    cout << "Inside destructor of TestVector" << endl;
}


/* class TestVectorIf functions*/
TestVectorIf *TestVectorIf::pfSingletonInstance = NULL;

TestVectorIf::TestVectorIf(void):TestVector()
{
    cout << "Inside constructor of TestVectorIf" << endl;
}

TestVectorIf::~TestVectorIf(void)
{
    cout << "Inside destructor of TestVectorIf" << endl;
}

TestVectorIf *TestVectorIf::getSingleton()
{
    if(pfSingletonInstance == NULL)
    {
        cout << " The singleton instance is NULL" << endl;
    }

    return pfSingletonInstance;
}


int main (void) {
  vector <TestVector*> pTestVectorIf;
  int choice = 1;
  int data = 0;
  TestVector *temp;
  while(choice != 0) {
    cout << "Enter your choice " << endl;
    cout << "0 - Exit" << endl << "1 - Add" << endl << "2 - print" << endl << "3 - delete" << endl;
    cin >> choice;
    switch(choice) {
    /* Add an element to vector */
    case 1:
    cout << "Insert element at the end " << endl;
    cin >> data;
    temp = new TestVector(data);
    pTestVectorIf.push_back(temp);
    break;
									    	    
    /* display the vector */
    case 2:
    cout << "Element in the vector are : " << endl;
    
    for (std::vector <TestVector*>::const_iterator iter = pTestVectorIf.begin();iter != pTestVectorIf.end();iter++)
    {
     cout << (*iter)->getA() << endl;
    }
    
    break;
													    	    
    /* delete an element from vector */
    case 3:
    cout << "Elements in the vector is deleted" << endl;
    if(!pTestVectorIf.empty())
    {
        for (std::vector <TestVector*>::const_iterator iter = pTestVectorIf.begin();iter != pTestVectorIf.end();iter++)
        {
            delete (*iter);
        }
	pTestVectorIf.clear();
		     
    }
    else
    {
       cout << "The vector is empty" << endl;
    }

    
    break;
																	    	    
    default :
    cout << " Enter only the above mentioned choice " << endl;
    }
   }
    return 0;
}
																						
