//
// Created by sagi yosef azulay on 28/06/2023.
//

#include "Linkedlist.h"

namespace templates {


    template<typename T>
    bool Linkedlist<T>::isEmpty() {
        return (size == 0 && head == nullptr && tail == nullptr);
    }

    template<typename T>
    Linkedlist<T>::Linkedlist():head(nullptr), tail(nullptr), size(0) {}

    template<typename T>
    Linkedlist<T>::Linkedlist(Node<T> head):head(head), tail(head), size(1) {}

    template<typename T>
    void Linkedlist<T>::insertFirst(Node<T> node) {
        if(isEmpty()){
            this->head=node;
            this->tail= node;
            size++;
        }
        else{
            
        }

    }


} // templates