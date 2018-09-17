#include <iostream>

#include "BTree.h"


using namespace std;


BTree::BTree()

{

root = NULL; 

}


BTree::~BTree() 

{

destroy_tree();

}


Node *BTree::BTree_root() 

{

return root; 

}


void BTree::destroy_tree(Node *leaf) 

{

if(leaf != NULL){ 

destroy_tree(leaf-> left);

destroy_tree(leaf->right);

delete leaf;

}


}

void BTree::insert(int key, Node *leaf) 

{

if(key < leaf -> key_value)

{

if(leaf -> left != NULL) //This is the left side of the leaf

{

insert(key, leaf -> left);

}

else

{

leaf -> left = new Node; //The insert function go through the tree until it reach an empty node and create two new child node, left and right.

leaf -> left -> key_value=key;

leaf -> left -> left = NULL;

leaf -> left -> right = NULL; 

}

} 

else if( key > leaf -> key_value) //This is the right side of the leaf

{

if(leaf -> right != NULL){

insert(key, leaf-> right);

}

else

{

leaf -> right = new Node; //Again, the insert function go through the tree on the right side of the left until it reach an empty node to create two new child node.

leaf -> right -> key_value=key;

leaf -> right -> left = NULL;

leaf -> right -> right = NULL;

}

}
}
Node *BTree::search(int key, Node *leaf)

{
if(leaf != NULL) //The search function go through the tree from left to right until the key is equal to key_value.

{

if(key == leaf -> key_value) 

{

return leaf;

}

else if(key < leaf -> key_value)

{

return search(key, leaf -> left);

}

else 

{

return search(key, leaf -> right);

}

}

else 

{

return NULL; //This returns when the function can't find the key in the tree.

}

}
void BTree:: insert(int key)

{

if(root!=NULL) //If root exists, the insert function is called to run through the tree.

{

insert(key, root);

}

else

{ //If root doesn't exist, a new root node is create to insert values into it.

root = new Node;

root -> key_value = key;

root -> left = NULL;

root -> right = NULL;

}

}


Node *BTree::search(int key) //Search function starts at root node.

{

return search(key, root);

}


void BTree::destroy_tree() //Deletes all nodes of the tree 

{

destroy_tree(root);

}

