#include <iostream>
#include "BST.h"

int main() {
    BST test;
    test.Insert(5);
    test.Insert(6);
    test.Insert(7);
    test.Insert(12);
    test.Insert(-6);
    test.Insert(-3);
    test.Insert(7);
    test.Insert(2);
    test.Insert(1);
    test.Delete(-6);
    test.InorderTreeWalk(test.Search(5));
    std::cout <<std::endl;
    test.Delete(2);
    test.InorderTreeWalk(test.Search(5));
    std::cout <<std::endl;
    test.Delete(7);
    test.InorderTreeWalk(test.Search(5));
    std::cout <<std::endl;
    test.Delete(5);
    test.InorderTreeWalk(test.Search(6));
    int k = test.Max(nullptr);
    int b = test.Min(nullptr);
    std::cout <<std::endl<< k << " " <<b << " "<<std::endl;
    return 0;
}