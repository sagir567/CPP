//
// Created by sagi yosef azulay on 28/06/2023.
//

#include "Node.h"
namespace templates{


template <typename T> Node<T>::Node(T data) {
    assert(data != nullptr) && "ERROR: data is null";
    this->data = data;
}
template <typename T> void Node<T>::setNext(Node<T> next){
   assert(next != nullptr) && "Error next argument is null";
   this->next=next;
};
template <typename T> void Node<T>::setPrev(Node<T> prev){
   assert(next != nullptr) && "Error next argument is null";
   this->prev=prev;
};

template<typename T> T Node<T>::getData(){
    return data;
}

}