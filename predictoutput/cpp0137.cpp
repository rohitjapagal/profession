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
#include <vector>
using namespace std;
 
class a
{
public :
    ~a()
    {
        cout << "destroy";
    }
};
int main()
{
   vector <a*> *v1  = new vector<a*>;
   vector <a> *v2  = new vector<a>;
   return 0;
}
