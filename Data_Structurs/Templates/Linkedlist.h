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
        int size;

    protected:
        Node<T> head;
        Node<T> tail;



    public:
        ~Linkedlist();
        Linkedlist();
        explicit Linkedlist(T data);
        bool isEmpty();
        void insertFirst(T data);
        void insertLast(T data);



     };


} // templates

#endif //CPP_LINKEDLIST_H
