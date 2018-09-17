#ifndef BTREE_H
#define BTREE_H

using namespace std;

struct Node
{
	int key_value;
	Node *left;	
	Node *right;	
};

class BTree
{
    
	public:
		BTree();	// Constructor
		~BTree();	// Destructor

		void insert(int key);
		Node *search(int key);
		void destroy_tree();
		Node *BTree_root();

	private:
		void destroy_tree(Node *leaf);
		void insert(int key, Node *leaf);
		Node *search(int key, Node *leaf);

		Node *root;


};

#endif
