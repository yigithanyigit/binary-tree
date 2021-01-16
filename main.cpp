#include <iostream>
#include "tree.h"

int main(){
    Tree *tree = new Tree;
    Tree::node *n = nullptr;
    n = tree->add(n,100);
    n = tree->add(n,54);
    n = tree->add(n,125);
    n = tree->add(n,44);
    n = tree->add(n,60);
    n = tree->add(n,105);
    n = tree->add(n,130);
    tree->sort(n);

}