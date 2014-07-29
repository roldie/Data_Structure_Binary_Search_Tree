//
//  BinarySearchTree.h
//  Binary_Search_Tree_Algorithm
//
//  Created by Harold Serrano on 7/28/14.
//  Copyright (c) 2014 Roldie.com. All rights reserved.
//

#ifndef __Binary_Search_Tree_Algorithm__BinarySearchTree__
#define __Binary_Search_Tree_Algorithm__BinarySearchTree__

#include <iostream>

class BinarySearchTree{
    
private:
    
    BinarySearchTree* leftChild;    //left child
    BinarySearchTree* rightChild;   //right child
    int data;                       //data
    
public:
    BinarySearchTree(int uData);
    ~BinarySearchTree(){};
    
    void insertChild(BinarySearchTree*& uTree,int uData);   //insert a child into the tree
    void deleteChild(BinarySearchTree*& uTree,int uData);   //delete a child of the tree
    BinarySearchTree *searchChild(BinarySearchTree* uTree,int uData);   //search for a child in the tree
    void deleteNode(BinarySearchTree*& uTree);              //deletes a node
    void getPredecessor(BinarySearchTree* uTree, int& uData);   //gets the predecessor of the node to be deleted
    
};

#endif /* defined(__Binary_Search_Tree_Algorithm__BinarySearchTree__) */
