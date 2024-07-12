#include "..\include\BinarySearchTree.h"


template<typename T>
void BSTree<T>::add_node(T val){
    this->node_count++;
    switch (root)
    {
    case nullptr:
        root= new BinarySearchTree(val);
        break;
    default:
        add_node_helper(root,val);
        break;
    }

}

template<typename T>
void BSTree<T>::add_node_helper(BinarySearchTree *n ,T val){
    if(n == nullptr) {
        n = new  BinarySearchTree(val);
        this->h = calc_height(this->root); 
    }
    else{
        if(val > n->node )
        {
            add_node_helper(n->right,val);
        } else if(val < n->node){
            add_node_helper(n->left,val);
        }
    }

}


// The time complexity of the algorthm is O(n) 
// Space complexity is O(n) due to recursive task
template<typename T>
uint32_t BSTree<T>::calc_height(BinarySearchTree *n){
    if(n == nullptr)
    {
        return 0;
    } else {
        uint32_t Lheight = calc_height(n->left);
        uint32_t Rheight = calc_height(n->right);
        // branchless selection  + stands for 'or'  gate , * stadn for 'and' gate 
        return (Lheight > Rheight) * (Lheight + 1) + (Lheight <= Rheight) * (Rheight + 1);
        /*
        can be substitued with  
            if(Lheight > Rheight) {
                code
            }
            else {
                code
            }
        */
    }

}
