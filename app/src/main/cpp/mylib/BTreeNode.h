//
// Created by GeekHou on 2020/11/29.
//

#ifndef BTREENODE_H
#define BTREENODE_H

#include "TreeNode.h"

namespace HynLib {
enum BTNodePos{
    ANY,
    LEFT,
    RIGHT
};
template<typename T>
class BTreeNode : public TreeNode<T> {
public:
    BTreeNode<T>* left;
    BTreeNode<T>* right;

    BTreeNode(){
        left = nullptr;
        right = nullptr;
    }
    static BTreeNode<T>* NewNode(){
        BTreeNode<T>* ret = new BTreeNode<T>();
        if(ret != nullptr){
            ret->m_flag = true;
        }
        return ret;
    }
};
}
#endif //BTREENODE_H
