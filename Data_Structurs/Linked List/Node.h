//
// Created by sagi yosef azulay on 13/03/2023.
//

#ifndef CPP_NODE_H
#define CPP_NODE_H

#include <iostream>;

using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node() {
        data = 0;
        next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


#endif //CPP_NODE_H
