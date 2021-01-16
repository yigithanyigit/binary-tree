
class Tree {
public:
    struct node
    {
        int data;
        node * left;
        node * right;
    };

    /* Example tree
    *       100
    *   54      125
    * 44  60
    */

    node *add(node * tree, int x); // Adding node to tree

    void sort_inorder(node * tree); //  Writes inorder traversal version of tree
    //  Example output
    //44 54 60 100 125
    void sort_preorder(node * tree); // Writes preorder traversal version of tree
    //  Example output
    //100 54 44 60 125
    void sort_postorder(node * tree); // Writes postorder traversal version of tree
    //  Example output
    //44 60 54 125 100
};