//
// Created by sagi yosef azulay on 13/03/2023.
//
#include "Node.h"
#include "LinkedList.h"
#include "iostream"

using namespace std;

bool LinkedList::isEmpty() {
    return (this->head == NULL);

}

void LinkedList::insert(int data) {
    Node *newNode = new Node(data);

    if (isEmpty()) {
        head = newNode;
        return;
    }
    Node *temp = head;
    while ((temp->next) != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void LinkedList::print() {
    if (isEmpty()) {
        cout << "ERROR: Linked list is empty!!!" << endl;
        return;
    }
    Node *temp = head;
    while ((temp->next) != NULL) {
        cout << (temp->data) << " --->";
        temp =temp->next;
    }
    cout << (temp->data) << endl;
}

void LinkedList::reversed() {
    if (isEmpty()) {
        cout << "ERROR: Linked list is empty!!!" << endl;
        return;
    }
    Node *current = head, *prev = NULL, *next = head->next;

    while (current != NULL){
        next = current -> next;
        current -> next =prev;
        prev =current;
        current = next;
    }
    head = prev;
    return;
}


int main (int argc , char** argv){

    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);

    list.print();
}



