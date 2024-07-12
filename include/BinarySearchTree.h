#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include<cstdint>




template<typename T>
class BSTree{

private:
    
    uint32_t h; //height of the tree
    uint32_t node_count; // number of nodes in the tree
    struct BinarySearchTree
    {
        T node;
        BinarySearchTree *left;
        BinarySearchTree *right;
        BinarySearchTree (T val) : node (val), left(nullptr), right(nullptr) {}
    };

    BinarySearchTree *root;

     void add_node_helper(BinarySearchTree *n,T val); //done
     uint32_t calc_height(BinarySearchTree *n); //done
   

public:    
    BSTree() : root(nullptr), h(0) , node_count(0) {}
    void add_node(T val);
    void remove_node();
    uint32_t height();
    T value();
    T *inorder();
    T *postorder();
    T *preorder();
    T *levelorder(); 

};


#endif