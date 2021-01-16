
class Tree {
public:
    struct node
    {
        int data;
        node * left;
        node * right;
    };

    node *add(node * tree, int x);

    void sort(node *tree); // Writes sorted versions of tree


};