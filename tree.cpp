#include "tree.h"
#include <cstdlib>
#include <iostream>


Tree::node * Tree::add(node *tree, int x) {
    if(tree == nullptr){
        Tree::node * tree = (Tree::node *)malloc(sizeof(tree));
        tree ->right = nullptr;
        tree ->left = nullptr;
        tree ->data = x;
        return tree;
    }
    if (tree -> data > x){
        tree ->left = add(tree->left, x);
        return tree;
    }
    tree -> right = add(tree -> right, x);
    return tree;
}

void Tree::sort(Tree::node *tree) {
    if(tree == nullptr)
        return;
    sort(tree ->left);
    printf("%d ", tree -> data);
    sort(tree ->right);
}
