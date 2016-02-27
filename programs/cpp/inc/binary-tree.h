/**
 * \file   binarytree-test.h
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

#ifndef __BINARYTREE_H__
#define __BINARYTREE_H__

#include <iostream>

using namespace std;

template <typename T>

class treeNode {
public :
treeNode *left;
treeNode *right;
T key;

T createNode(T key);

};


#endif /*__BINARYTREE_H__*/
