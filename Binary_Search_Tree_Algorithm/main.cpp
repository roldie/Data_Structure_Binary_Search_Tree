//
//  main.cpp
//  Binary_Search_Tree_Algorithm
//
//  Created by Harold Serrano on 7/28/14.
//  Copyright (c) 2014 Roldie.com. All rights reserved.
//

#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

int main(int argc, const char * argv[])
{

    BinarySearchTree* root=new BinarySearchTree(17);
    
    root->insertChild(root, 9);
    root->insertChild(root, 16);
    
    root->insertChild(root, 20);
    root->insertChild(root, 18);
    root->insertChild(root, 25);
    
    BinarySearchTree *foundNode=root->searchChild(root, 20);
    
    
    root->deleteChild(root, 18);
    
    while (1);
    
    return 0;
}

