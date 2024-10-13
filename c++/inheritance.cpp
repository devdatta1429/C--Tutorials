#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name, int age){
        this->name=name;
        this->age=age;
    }
    // Person(){

    // }
};

class Student : public Person{
    public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age){
        this->rollno=rollno;
    }


    void getInfo(){
        cout<<"name"<<name<<endl;
        cout<<"age"<<age<<endl;
        cout<<"rollno"<<rollno<<endl;

    }

};

int main(){
    Student s1("rahul",21,33);
    
    s1.getInfo();
    return 0;
}