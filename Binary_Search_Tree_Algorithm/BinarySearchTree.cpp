//
//  BinarySearchTree.cpp
//  Binary_Search_Tree_Algorithm
//
//  Created by Harold Serrano on 7/28/14.
//  Copyright (c) 2014 Roldie.com. All rights reserved.
//

#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree(int uData){
    
    data=uData;     //set the data of the root
    
    leftChild=NULL;  //set the left child to null
    rightChild=NULL; //set the right child to null
    
}

void BinarySearchTree::insertChild(BinarySearchTree*& uTree,int uData){
    
    if (uTree==NULL) {
        
        uTree=new BinarySearchTree(uData);  //insertion was found
        uTree->leftChild=NULL;
        uTree->rightChild=NULL;
        
    }else if(uData<=uTree->data){               //test if data is less than or equal to parent data
        
        insertChild(uTree->leftChild, uData);   //insert into left subtree
        
    }else if(uData>uTree->data){                //test if data is greater than parent data
        
        insertChild(uTree->rightChild,uData);   //insert into right subtree
    }
    
}

BinarySearchTree* BinarySearchTree::searchChild(BinarySearchTree* uTree, int uData){
    
    BinarySearchTree* foundTree;
    
    if(uTree==NULL){     //item is not found
        
        foundTree=NULL;     //return null
        
    }else if(uData<(uTree->data)){  //search left subtree
        
        foundTree=searchChild(uTree->leftChild, uData);
        
    }else if(uData>(uTree->data)){  //search right subtree
        
        foundTree=searchChild(uTree->rightChild, uData);
        
    }else{                          //item is found
        
        foundTree=uTree;
    }
    
    return foundTree;
}

void BinarySearchTree::deleteChild(BinarySearchTree*& uTree,int uData){
    
    if (uData<uTree->data) {
        
        deleteChild(uTree->leftChild,uData);    //look in left subtree
        
    }else if(uData>uTree->data){
        
        deleteChild(uTree->rightChild,uData);   //look in right subtree
        
    }else{
        
        deleteNode(uTree);                     //node found, call deleteNode
    }
    
}

//deletes the node pointed by the tree
void BinarySearchTree::deleteNode(BinarySearchTree*& uTree){
    
    BinarySearchTree* tempTree;
    
    tempTree=uTree;
    
    if (uTree->leftChild==NULL) {
        
        uTree=uTree->rightChild;
        delete tempTree;
        
    }else if(uTree->rightChild==NULL){
        
        uTree=uTree->leftChild;
        delete tempTree;
        
    }else{
        
        getPredecessor(uTree->leftChild, uTree->data);
        deleteChild(uTree->leftChild, uTree->data);     //Delete predecessor node
    }
    
}

void BinarySearchTree::getPredecessor(BinarySearchTree* uTree, int& uData){
    
    
    while (uTree->rightChild!=NULL) {
        
        uTree=uTree->rightChild;    //setst uData to the rightmost node in tree
        
    }
    
    uData=uTree->data;
}

