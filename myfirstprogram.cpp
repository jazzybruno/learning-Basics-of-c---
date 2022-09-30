//
// Created by djb on 9/29/22.
//

#include <iostream>
using namespace  std;
int sum() {
    string name = "Jazzy Bruno";
    int age = 15;
    const string gender = "Male";
    int x=1000 , y=2000 , z=8000 , e=1000 , sum;
    bool single = true;
    cout<<"This is the first line \n"; //hello world this is a comment
    cout<<"This is the second line " <<endl; // hello world this is the second comment
    cout<<"This is the third line \n"; // this is the third comment
    cout<< name <<endl;
    cout<< age <<endl;
    cout<< single <<endl;
    cout<<"Hello World my name is: " << name << " and i am: " << age << " years old";
     sum = x+y+z+e;
     cout<<"My networth is currently: $" <<sum <<endl;
     cout<<"My gender is: " <<gender;
}