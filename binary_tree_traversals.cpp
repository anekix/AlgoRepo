/*
refrence : http://rosettacode.org/wiki/Tree_traversal#C.2B.2B

         1
        / \
       /   \
      /     \
     2       3
    / \     /
   4   5   6
  /       / \
 7       8   9
 
 */
#include<iostream>
#include<memory>
using namespace std;


template <typename T>
class TreeNode{

public:
	TreeNode(T n, TreeNode* left = NULL, TreeNode* right = NULL)
            : mValue(n), 
              mLeft(left),
              mRight(right){}
        void inorderTraverse();
        T getValue() const {
	    return mValue;
	  }
	 

protected:
      T mValue;
      unique_ptr<TreeNode> mLeft;
      unique_ptr<TreeNode> mRight;


};

template <typename T> void TreeNode<T>::inorderTraverse(){
   if(mLeft)  { mLeft->inorderTraverse();  }
   std::cout << " " << getValue();
   if(mRight) { mRight->inorderTraverse(); }
}

int main(){

 TreeNode<int> root(1,
    new TreeNode<int>(2,
      new TreeNode<int>(4,
        new TreeNode<int>(7)),
      new TreeNode<int>(5)),
    new TreeNode<int>(3,
      new TreeNode<int>(6,
        new TreeNode<int>(8),
        new TreeNode<int>(9))));
 root.inorderTraverse();
 
return 0;
}
