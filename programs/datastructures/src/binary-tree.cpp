#include "../inc/binary-tree.h"
#include <iostream>
#include <iomanip>

using namespace std;


Node::Node(int x){
  key =x;
  left = NULL;
  right = NULL;
 }

/* Function to line by line print level order traversal a tree*/
void BinaryTree::printLevelOrder(Node* root)
{
    int h = maxDepth(root);
    int i;
    for (i=1; i<=h; i++)
    {   
        std::cout << std::setw((h-i + 1)*8) << ' ';
        printGivenLevel(root, i,0);
        cout << endl;
    }
    cout << endl << endl << endl;
}
 
/* Print nodes at a given level */
void BinaryTree::printGivenLevel(Node* root, int level,int left)
{
    int h = maxDepth(root);
    if (root == NULL)
        return;
    if (level == 1) {
//        std::cout << std::setw(8) << ' ';
        if(left) {
        cout << "<<" ;
     //   cout << std::setw(4) << ' ';
        }
        cout << root->key;
         if(!left) {
        cout << ">>" ;
        cout << std::setw(8) << ' ';
        }
    }
    else if (level > 1)
    {        
        printGivenLevel(root->left, level-1,1);
        std::cout << std::setw((h-level)*8) << ' ';
        printGivenLevel(root->right, level-1,0);
    }    
}

void BinaryTree::printTreeGraphical(Node *node, int indent) {
  if(node == NULL)
  return;


  
  if(node->right) {
            printTreeGraphical(node->right, indent+4);
        }
        if (indent) {
            std::cout << std::setw(indent) << ' ';
        }
        if (node->right) std::cout<<" /\n" << std::setw(indent) << ' ';
        std::cout<< node->key << "\n ";
        if(node->left) {
            std::cout << std::setw(indent) << ' ' <<" \\\n";
            printTreeGraphical(node->left, indent+4);
        }
}

void BinaryTree::printPostOrder(Node *node) {
  if(node == NULL)
  return;
  
  printPostOrder(node->left);
  printPostOrder(node->right);
  cout << node->key << "\t";
 }
 
void BinaryTree::printInOrder(Node *node) {
  if(node == NULL)
  return ;
  
  printInOrder(node->left);
  cout << node->key << "\t";
  printInOrder(node->right);
 }
 
void BinaryTree::printPreOrder(Node *node) {
  if(node == NULL)
  return;
  
  cout << node->key <<"\t";
  printPreOrder(node->left);
  printPreOrder(node->right);
 }

int BinaryTree::printSize(Node *node) {
if (node==NULL) 
    return 0;
  else    
    return(printSize(node->left) + 1 + printSize(node->right));  
 }
 
BinaryTree::BinaryTree(int key) {
 }
 
BinaryTree::BinaryTree()
 {
  root = NULL;
 }
 
void BinaryTree::printPostOrder() {
  printPostOrder(root);
  cout << endl;
 }
 
void BinaryTree::printInOrder() {
  printInOrder(root);
  cout << endl;
 }
 
void BinaryTree::printPreOrder() {
  printPreOrder(root);
  cout << endl;
 }

void BinaryTree::printSize() {  
  cout << printSize(root) << endl;
 }

/* Compute the "maxDepth" of a tree -- the number of 
    nodes along the longest path from the root node 
    down to the farthest leaf node.*/
int BinaryTree::maxDepth(Node* node) 
{
   if (node==NULL) 
       return 0;
   else
   {
       /* compute the depth of each subtree */
       int lDepth = maxDepth(node->left);
       int rDepth = maxDepth(node->right);
 
       /* use the larger one */
       if (lDepth > rDepth) 
           return(lDepth+1);
       else return(rDepth+1);
   }
} 

void BinaryTree::maxDepth() {  
  cout << "Maximum Depth :" << maxDepth(root) << endl;
 }

/* Given two trees, return true if they are
 structurally identical */
int BinaryTree::identicalTrees(Node* a, Node* b)
{
    /*1. both empty */
    if (a==NULL && b==NULL)
        return 1;
 
    /* 2. both non-empty -> compare them */
    if (a!=NULL && b!=NULL)
    {
        return
        (
            a->key == b->key &&
            identicalTrees(a->left, b->left) &&
            identicalTrees(a->right, b->right)
        );
    }
     
    /* 3. one empty, one not -> false */
    return 0;
} 

int main(void) {
 int choice;
 int subChoice = 0;
 BinaryTree *tree = new BinaryTree(1);
 tree->root = new Node(1);
 tree->root->left = new Node(2);
 tree->root->right = new Node(3);
 tree->root->left->left = new Node(4);
 tree->root->left->right = new Node(5);
 tree->root->right->left = new Node(6);
 tree->root->right->right = new Node(7);
 tree->root->left->left->left = new Node(8);
 tree->root->left->right->left = new Node(9);
 tree->root->left->right->right = new Node(10);
 tree->root->right->left->right = new Node(11);
 tree->root->right->right->left = new Node(12);
 tree->root->right->right->right = new Node(13);
 tree->root->right->right->left->left = new Node(14);

 BinaryTree *tree1= new BinaryTree(1);
 tree1->root = new Node(1);
 tree1->root->left = new Node(2);
 tree1->root->right = new Node(3);
 tree1->root->left->left = new Node(4);
 tree1->root->left->right = new Node(5);
 tree1->root->right->left = new Node(6);
 tree1->root->right->right = new Node(7);
 tree1->root->left->left->left = new Node(8);
 tree1->root->left->right->left = new Node(9);
 tree1->root->left->right->right = new Node(10);
 tree1->root->right->left->right = new Node(11);
 tree1->root->right->right->left = new Node(12);
 tree1->root->right->right->right = new Node(13);
 tree1->root->right->right->left->left = new Node(15);

 BinaryTree *tree2 = new BinaryTree(1);
 tree2->root = new Node(1);
 tree2->root->left = new Node(2);
 tree2->root->right = new Node(3);
 tree2->root->left->left = new Node(4);
 tree2->root->left->right = new Node(5);
 tree2->root->right->left = new Node(6);
 tree2->root->right->right = new Node(7);
 tree2->root->left->left->left = new Node(8);
 tree2->root->left->right->left = new Node(9);
 tree2->root->left->right->right = new Node(10);
 tree2->root->right->left->right = new Node(11);
 tree2->root->right->right->left = new Node(12);
 tree2->root->right->right->right = new Node(13);
 tree2->root->right->right->left->left = new Node(14);

 do { 
 cout << endl << endl << "***************** Enter your choice ******************" << endl << endl; 
 cout <<"0. Exit." << endl;
 cout <<"1. Tree Traversal." << endl;
 cout <<"2. Size of a tree." << endl;
 cout <<"3. Determine if two tree are identical." << endl;
 cout <<"4. Maximum Depth or Height of a tree." << endl;
 cout <<"5. Delete a tree." << endl;
 cout <<"6. Convert a binary tree into its minor tree." << endl;
 cout <<"7. Given two traversal sequence, can you construct binary tree." << endl;
 cout <<"8. Print out all of its root to leaf paths one per line." << endl;
 cout <<"9. Great tree-list recursion problem." << endl;
 cout <<"10. Level order tree traversal. " << endl;
 cout <<"11. Count lead nodes in a tree." << endl;
 cin >> choice;

  switch(choice) {
      //Tree Traversal
      case 1:
       cout << endl << endl << "***************** Enter your sub choice ******************" << endl << endl;
       cout <<"0. Exit." << endl;
       cout <<"1. Inorder" << endl;
       cout <<"2. PreOrder" << endl;
       cout <<"3. PostOrder" << endl;
       cin >> subChoice;
        switch(subChoice){
         case 0 :
         break;
         /*
         Algorithm Inorder(tree)
   1. Traverse the left subtree, i.e., call Inorder(left-subtree)
   2. Visit the root.
   3. Traverse the right subtree, i.e., call Inorder(right-subtree)
         */
         case 1 :
           tree->printLevelOrder(tree->root);
           tree->printInOrder();
         break;
         case 2 :
         /*
         Algorithm Preorder(tree)
   1. Visit the root.
   2. Traverse the left subtree, i.e., call Preorder(left-subtree)
   3. Traverse the right subtree, i.e., call Preorder(right-subtree)
   */
           tree->printPreOrder();
         break;
/*
Algorithm Postorder(tree)
   1. Traverse the left subtree, i.e., call Postorder(left-subtree)
   2. Traverse the right subtree, i.e., call Postorder(right-subtree)
   3. Visit the root.
*/         
         case 3 :
	  tree->printPostOrder();
         break;
         default :
         cout << "Enter only the choice provided" << endl;
         
        }
      break;

      /*Size of the tree*/
      /*
       size(tree)
       1. If tree is empty then return 0
       2. Else
        (a) Get the size of left subtree recursively  i.e., call 
          size( tree->left-subtree)
        (b) Get the size of right subtree recursively  i.e., call 
          size( tree->right-subtree)
        (c) Calculate size of the tree as following:
            tree_size  =  size(left-subtree) + size(right-
                               subtree) + 1
        (d) Return tree_size
      */
      case 2:
      tree->printSize();
      break;

      /* Determine if two tree are identical*/
      /*
       sameTree(tree1, tree2)
       1. If both trees are empty then return 1.
       2. Else If both trees are non -empty
          (a) Check data of the root nodes (tree1->data ==  tree2->data)
          (b) Check left subtrees recursively  i.e., call sameTree( 
              tree1->left_subtree, tree2->left_subtree)
          (c) Check right subtrees recursively  i.e., call sameTree( 
              tree1->right_subtree, tree2->right_subtree)
          (d) If a,b and c are true then return 1.
       3  Else return 0 (one is empty and other is not)
       */
      case 3:
      cout << "Trees identical : "<< ((tree->identicalTrees(tree->root,tree1->root)) ? "true" : "false")  << endl;
      cout << "Trees identical : "<< ((tree->identicalTrees(tree->root,tree2->root)) ? "true" : "false")  << endl;

      break;

      /* Maximum Depth or Height of the tree*/
      /*
        maxDepth()
        1. If tree is empty then return 0
        2. Else
           (a) Get the max depth of left subtree recursively  i.e., 
               call maxDepth( tree->left-subtree)
           (b) Get the max depth of right subtree recursively  i.e., 
               call maxDepth( tree->right-subtree)
           (c) Get the max of max depths of left and right 
               subtrees and add 1 to it for the current node.
               max_depth = max(max dept of left subtree,  
                           max depth of right subtree) + 1
           (d) Return max_depth
      */
      case 4:
      tree->maxDepth();
      break;

      /* 5. Delete a tree*/
      case 5:
      break;

      /* convert a binary tree into its minor tree*/
      case 6:
      break;

      /* Given two traversal sequence, can you construct binary tree*/
      case 7:
      break;

      /* Print out all of its root to leaf path one per line*/
      case 8:
      break;

      /* Great tree-list recursion problem. */
      case 9:
      break;

      /*Level order tree traversal */
      case 10:
      break;

      /* Count lead nodes in a tree */
      case 11:
      break;
   }
  } while(choice != 0);
 return 0;
}

