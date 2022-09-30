//
// Created by djb on 9/29/22.
//
#include <iostream>
using namespace  std;

namespace userDefined {
    int insideNamespace = 5000;

    int cout () {
        return insideNamespace;
    }
}

int myGlobal = 1000;

int cout() {
    return myGlobal * myGlobal;
}

int print() {
    int cout = 9000;
    std::cout<<"The local variable cout in main is "<< cout <<endl;
    std::cout<<"The variable in userDefined namespace is "<< userDefined::insideNamespace <<endl;
    std::cout<<"The output of cout() in userDefined is "<< userDefined::cout();
    std::cout<<"\n The value of myGlobal is "<<::myGlobal ;
    std::cout<<"\n The output of global cout() is "<< ::cout() ;
}