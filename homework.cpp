//
// Created by djb on 9/29/22.
//
#include <iostream>
using namespace  std;
int homework( ) {
    int first , second , square = 1 , sum=0 ,  odd=1 , prime=1;
    cout<<"Enter the first number: ";
    cin>>first;
    cout<<"Enter the second number: ";
    cin>>second;
    for (int i = 0; i < second; ++i) {
        square *= first;
    }
    for (int i = 0; i < 101; ++i) {
         if(i%2 == 0){
             sum += i;
         }else{
             continue;
         }
    }

    for (int i = 0; i < 21; ++i) {
        if(i%2 != 0){
            odd *= i;
        }else{
            continue;
        }
    }

    for (int i = 0; i < 101; ++i) {
        int divisible = 0;
        divisible = ++i;
        if(i%1 == 0 && i%divisible == 0){
            prime *= i;
        }else{
            continue;
        }
    }
    cout<<"The square of the first number by the second number is: " <<square <<endl;
    cout<<"The sum of all even numbers between 1 and 100 is: " <<sum <<endl;
    cout<<"The product of all odd numbers between 1 and 20 is: " <<odd <<endl;
    cout<<"The product of all prime numbers between 1 and 100 is: " <<prime <<endl;

}