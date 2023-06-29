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
    Linkedlist<T>::Linkedlist(T data):head(Node<T>(data)), tail(Node<T>(data)), size(1) {}

    template<typename T>
    void Linkedlist<T>::insertFirst(T data) {
        if(isEmpty()){
            this->head=Node<T> (data);
            this->tail= Node<T> (data);
            size++;
        }
        else{
            Node<T> tempNode(data) ;
            tempNode.setNext(head);
            this->head.setPrev(tempNode);
            this->head=tempNode;
            size++;
        }

    }
    template<typename T>
    void Linkedlist<T>::insertLast(T data) {
        Node<T> tempNode(data);
        if(isEmpty()){
            this->head=tempNode;
            this->tail=tempNode;
            size++;
        }
        else{
            this->tail.setNext(tempNode);
            this->tail=tempNode;

        }
    }


} // templates