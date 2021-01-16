#include "tree.h"
#include <iostream>



Tree::node * Tree::add(node *tree, int x) {
    if(tree == nullptr){
        Tree::node * tree = (node *)malloc(sizeof(node));
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

void Tree::sort_inorder(node *tree) {
    if(tree == nullptr)
        return;
    sort_inorder(tree ->left);
    printf("%d ", tree -> data);
    sort_inorder(tree ->right);
    free(tree);
}

void Tree::sort_preorder(node *tree) {
    if(tree == nullptr)
        return;
    printf("%d ", tree -> data);
    sort_preorder(tree -> left);
    sort_preorder(tree -> right);
    free(tree);
}

void Tree::sort_postorder(node *tree) {
    if(tree == nullptr)
        return;
    sort_postorder(tree ->left);
    sort_postorder(tree ->right);
    printf("%d ", tree -> data);
    free(tree);
}
