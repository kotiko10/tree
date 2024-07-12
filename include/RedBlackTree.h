template<typename T>
class RB_Tree{

private:

    struct RedBlackTree
    {
        T node;
        RedBlackTree *left;
        RedBlackTree *right;
        // 0 - stadn for black, 1 - stands for red
        bool color;
        BinarySearchTree (T val) : node (val), left(nullptr), right(nullptr), color(0) {}
    };
};