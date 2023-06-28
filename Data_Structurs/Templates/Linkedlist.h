//
// Created by sagi yosef azulay on 28/06/2023.
//

#ifndef CPP_LINKEDLIST_H
#define CPP_LINKEDLIST_H

#include "Node.h"

namespace templates {

    template<typename T>
    class Linkedlist {
    private:
        int size= 0;

    protected:
        Node<T> head;
        Node<T> tail;



    public:
        Linkedlist();
        explicit Linkedlist(Node<T>);
        bool isEmpty();
        void insertFirst(Node<T>);
        void insertBack(Node<T>);



     };

    template<typename T>


} // templates

#endif //CPP_LINKEDLIST_H
