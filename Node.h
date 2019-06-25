#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class Node {
    public :
        int key ;
        Node* next;
        Node* prev;

        Node() { key=0; next=nullptr; prev=nullptr; };
};

#endif