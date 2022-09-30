//
// Created by djb on 9/29/22.
//
#include <iostream>
using namespace std;

int circle (){
    float Pi = 3.14159265;
    float area , circmufrence , radius , diameter;
    cout<<"Enter the radius : ";
    cin>>radius;
    cout<<"Enter the diameter: ";
    cin>>diameter;
    circmufrence = diameter * Pi;

    area = (radius * radius) * Pi;
    cout<<"The area is: " <<area;
    cout<<"The circmufrence is: " <<circmufrence;
}