//
// Created by sagi yosef azulay on 28/06/2023.
//

#ifndef CPP_NODE_H
#define CPP_NODE_H

namespace templates {

    template<typename T> class Node {

    private:
        T data;
        Node<T> *next;
        Node<T> *prev;


    public:
        explicit Node(T data);
        ~Node();
        void setNext(Node<T> next);
        void setPrev(Node<T> prev);
        T getData();



    };
}
#endif //CPP_NODE_H
