#ifndef __BINARYTREE_H__

#define __BINARYTREE_H__

using namespace std;



class Node {
 public :
  int key;
  Node *left;
  Node *right;

   Node(int x);
   ~Node();
   };

class BinaryTree{
 public :
   Node *root;

   BinaryTree();
   BinaryTree(int key) ;

   void printPostOrder(Node *node);
   void printInOrder(Node *node);
   void printPreOrder(Node *node);
   int  printSize(Node *node);
   int identicalTrees(Node* a, Node* b);
   int maxDepth(Node* node);
   void printTreeGraphical(Node *node, int indent);
   void printLevelOrder(Node* root);
   void printGivenLevel(Node* root, int level,int left);
   
   void printPostOrder();
   void printInOrder();
   void printPreOrder();
   void printSize();
   void maxDepth();
   };
#endif /*__BINARYTREE_H__*/
