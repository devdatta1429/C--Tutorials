#include<iostream>
using namespace std;

class Student{
    public:
    string name;

    Student(){
        cout<<"nonparameterized constructor"<<endl;
    }
    Student(string name){
        // this->name=name;
        cout<<"paraneterized constructor"<<endl;
    }
};


int main(){
Student s1("Rahul");


    return 0;
}