//
// Created by sagi yosef azulay on 13/03/2023.
//

#ifndef CPP_LINKED_LIST_H
#define CPP_LINKED_LIST_H
#include "Node.h"


class LinkedList {
    Node* head;

public:
    LinkedList(){
        this -> head = NULL;
    }

    void insert(int);
    void print();
    void reversed();
    void deleteAt(int);
    void insertAt(int , Node*);
    bool isEmpty();

};


#endif //CPP_LINKED_LIST_H
