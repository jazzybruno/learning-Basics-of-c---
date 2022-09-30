//
// Created by djb on 9/29/22.
//
#include <iostream>
using namespace  std;
namespace  first {
    int amount = 5000;
}
int amount = 6000;

int names(){
    int amount = 10000;
     cout<<"The sum is " << amount + first::amount <<endl;
     cout<<"The variable declared in the namespace is: " << first::amount <<endl;
     cout<<"The variable declared globally is : " <<::amount <<endl;
     cout<<"THe variable declared locally is: " << amount;


}