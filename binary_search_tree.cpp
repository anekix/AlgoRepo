/*TYPICAL INSERTION staticaly building tree
	new_node=create_new_node(5);
	insert(root,new_node);
	new_node=create_new_node(4);
	insert(root,new_node);
	new_node=create_new_node(6);
	insert(root,new_node);
	display(root);*/
// TREE ELEMENTS for dynamically building the tree->7, 1, 0, 3 , 2, 5, 4, 6, 9, 8, 10
#include<iostream>
using namespace std;
class node {
public:
		int data;
		node *left;
		node *right;
}*root,*temp_root_node,*new_node;
node *create_new_node(int);//create new node in memory
void insert(node *,node *);// insert new node in binary search tree
void preorder(node *);// ROOT-LEFT-RIGHT
void postorder(node *);// LEFT-RIGHT-ROOT
void inorder(node *);//LEFT-ROOT-RIGHT
bool search(node *, int);// to find an element in the tree
int find_min(node *);//find minimum element un th tree
int find_max(node *);// find maximum element in the tree
int x[]={7, 1, 0, 3 , 2, 5, 4, 6, 9, 8, 10};//tree elements for dynamic tree building
int main(){
for(int i=0;i<11;i++){
new_node=create_new_node(x[i]);
insert(root,new_node);

}  
	preorder(root);cout<<endl;
	postorder(root);cout<<endl;
	inorder(root);cout<<endl;
	cout<<find_min(root)<<endl;
	cout<<find_max(root)<<endl;
	cout<<search(root,9)<<endl;
	return 0;
}
bool search(node *n,int x){
	if(n==NULL) return false;
	else if(n->data==x) return true;
	else if (x<n->data){
		search(n->left,x);
		}
	else if(x>n->data){
		search(n->right,x);
	}
}
void preorder(node *t) {
if (t != NULL) {
cout << t->data << endl;
preorder(t->left);
preorder(t->right);
}
}
void postorder(node *t) {
if (t != NULL) {
postorder(t->left);
postorder(t->right);
cout << t->data << endl;

}
}
void inorder(node *t){
	if(t!=NULL){
		inorder(t->left);
		cout<<t->data<<endl;
		inorder(t->right);
	}
}
int find_min(node * n){ 
	if(n->left==NULL) return n->data;
	else
	find_min(n->left);
}
int find_max(node * n){
	if(n->right==NULL) return n->data;
	else
	find_max(n->right);
}
node *create_new_node(int n){
	new_node=new node;
	new_node->data=n;
	new_node->left=NULL;
	new_node->right=NULL;
	return new_node;
}
void insert(node * temp_root_node,node *np){
	if (root==NULL) root =np;
	else
	if(np->data<temp_root_node->data){
		if(temp_root_node->left!=NULL){
			insert(temp_root_node->left,np);
		}
		else{
			temp_root_node->left=np;
		}
	}
	else
	if(np->data>temp_root_node->data){
		if(temp_root_node->right!=NULL){
			insert(temp_root_node->right,np);
		}
		else{
			temp_root_node->right=np;
		}
		}
	
}
