//  BST312
//  Sample driver main.cpp
//  EE 312 Fall 2018
//
//The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for
// output.
//  Created by Guy on 11/17/18.
//  Copyright © 2018 Guy Co. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    ifstream inFile;
    inFile.open("test.txt");
    
    BST_312<string> bst;
    
    string s;
    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }
    
    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;
    
    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;
    
    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;
    
    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = "f";
    bst.deleteItem(s);
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;
    
    BST_312<int> bstI;
    
    for(int i=0;i<10;i++){
        bstI.insertItem(i);
    }
    
    cout << "2: postorder traversal is " << endl;
    print(bstI.postOrderTraversal());
    cout << endl;
    
    cout << "2: preorder traversal is " << endl;
    print(bstI.preOrderTraversal());
    cout << endl;
    
    cout << "2: inorder traversal is " << endl;
    print(bstI.inOrderTraversal());
    cout << endl;
    
    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bstI.countNodes() << endl;
    bstI.deleteItem(3);
    print(bstI.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bstI.countNodes() << endl;
    cout << endl;
    
    BST_312<char> bstC;
    
    char input[] = {'f', 'a', 'c', 'b', 'd', 'e', 'g', 'i', 'h', 'j', 'k'};
    
    for(int i=0;i<11;i++){
        bstC.insertItem(input[i]);
    }
    
    cout << "3: postorder traversal is " << endl;
    print(bstC.postOrderTraversal());
    cout << endl;
    
    cout << "3: preorder traversal is " << endl;
    print(bstC.preOrderTraversal());
    cout << endl;
    
    cout << "3: inorder traversal is " << endl;
    print(bstC.inOrderTraversal());
    cout << endl;
    
    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bstC.countNodes() << endl;
    bstC.deleteItem('f');
    print(bstC.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bstC.countNodes() << endl;
    cout << endl;
    
    bstC.makeEmpty();
    cout << endl;
    cout << "number of nodes in tree after empty is " << bstC.countNodes() << endl;
    cout << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
