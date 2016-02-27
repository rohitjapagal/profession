/**
 * \file   vector-test.h
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
 
#ifndef __VECTOR_H__
#define __VECTOR_H__
#include <iostream>
#include <vector>

/*contains the demo of the vector operations*/

class TestVector {
 private :
   int a;
   int *ptr;
       
public :
   void setA(int A) ;
   TestVector(void);
   ~TestVector(void);
   TestVector(int);
   int getA(void);
};

class TestVectorIf:public TestVector
{
private:
std::vector <TestVector *> TestVectorTable;
static TestVectorIf *pfSingletonInstance;

public :
TestVectorIf(void);
~TestVectorIf(void);
static TestVectorIf *getSingleton(void);
};

#endif
