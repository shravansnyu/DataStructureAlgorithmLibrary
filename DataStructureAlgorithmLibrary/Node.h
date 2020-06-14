//
//  Node.h
//  DataStructureAlgorithmLibrary
//
//  Created by Shravan K on 6/14/20.
//  Copyright © 2020 GoDimensions. All rights reserved.
//

#ifndef Node_h
#define Node_h
template<class T>
class Node {
    std::shared_ptr<T> next;
    T value;
    
public:
    Node(T val){
        this->value = val;
        this->next = nullptr;
    }
};

#endif /* Node_h */
