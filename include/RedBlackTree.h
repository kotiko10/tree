#include<cstdint>

template<typename T>
class RB_Tree{

private:

    uint32_t node_count; // number of nodes in the tree
    struct RedBlackTree
    {
        T node;
        RedBlackTree *left;
        RedBlackTree *right;
        // 0 - stadn for black, 1 - stands for red
        bool color;
        BinarySearchTree (T val) : node (val), left(nullptr), right(nullptr), color(0) {}
    };

    void rotate_left();
    void rotate_right();

public:
    void add_node();
    void delete_node();

};