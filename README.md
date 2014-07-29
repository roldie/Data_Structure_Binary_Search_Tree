Data_Structure_Binary_Search_Tree
=================================

Binary Search Tree Data Structure in C++

This example shows how to implement a simple Binary Search Tree in C++.

See main.cpp for examples on how to use the binarySearchTree class

//EXAMPLE

	//Create a binary tree
	BinarySearchTree* root=new BinarySearchTree(17);
    
    //insert child into the binary tree
    root->insertChild(root, 9);
    root->insertChild(root, 16);
    
    root->insertChild(root, 20);
    root->insertChild(root, 18);
    root->insertChild(root, 25);
    
    //search for a node with value 2
    BinarySearchTree *foundNode=root->searchChild(root, 20);
    
    
    //delete Child with value
    root->deleteChild(root, 18);