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
        
    std::shared_ptr<Node<T>> header;
public:
    LinkedList(T val){
        header = new Node<T>;
        header->value = val;
        header->next = nullptr;
    }
};

#endif /* LinkedList_h */
