//
// Created by djb on 9/29/22.
//
#include <iostream>
using namespace std;

int tenary() {
    float marks;
    string status;
    char grade;
    cout<<"Enter your marks out of 20: ";
    cin>>marks;
    cout<<"The marks you entered are: " <<marks << "/20" <<endl;
    status = marks < 10 ? "Failed" : "Passed";
    grade = marks >= 16 ? 'A' : marks > 14 ?  'B': marks >=10 ? 'C' : 'D';
    cout<<"You have " <<status << " !!!!!!" <<endl;
    cout<<"Your Grade is " << grade;
    cout<<"12 & 25 =  " << (12 & 25);
    cout<<"12 | 25 =  " << (12 | 25);
    cout<<"12 ^ 25 =  " << (12 ^ 25);
    cout<<"12 ^ 25 =  " << (25 >> 3);
    cout<<"12 ^ 25 =  " << (25 >> 2);
    cout<<"12 ^ 25 =  " << (12 << 3);
    cout<<"12 ^ 25 =  " << (12 << 1);
    cout<<"12 ^ 25 =  " << (12 >> 1);
}