//
//  LinkedList.h
//  DataStructureAlgorithmLibrary
//
//  Created by Shravan K on 13/06/20.
//  Copyright © 2020 GoDimensions. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include "Node.h"

template<class T>
class LinkedList{
        
    std::shared_ptr<Node<T>> head;
    std::shared_ptr<Node<T>> tail;
    int size;
public:
    LinkedList(){
        size = 0;
        head = nullptr;
        tail = nullptr;
    }
    LinkedList(T val){
        head = new Node<T>(val);
        tail = head;
        size = 1;
    }
    void add(T val){
        if(head==nullptr){
            std::shared_ptr<Node<T>> newNode = new Node<T>(val);
            head = newNode;
            tail = head;
        } else{
            std::shared_ptr<Node<T>> newNode = new Node<T>(val);
            tail->next = newNode;
            tail = newNode;
        }
    }
    std::shared_ptr<Node<T>> get_head(){
        return head;
    }
    std::shared_ptr<Node<T>> get_tail(){
        return tail;
    }
    void remove(){
        if(head == tail){
            delete head;
            head = nullptr;
            tail = nullptr;
        }else{
            std::shared_ptr<Node<T>> tempHead = head;
            head = head->next;
            delete tempHead;
        }
    }
    void remove(T val){
        // TODO
    }
};

#endif /* LinkedList_h */
