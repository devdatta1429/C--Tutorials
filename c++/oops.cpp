#include<iostream>
#include<string>
using namespace std;

class Teacher{
    //properties/ attributes
private:
    double salary;
public:
string name;
string dept;
string subject;
//This is non-parameterized constructor
// Teacher(){
//    dept = "CS";
// }

//This is parameterized constructor
Teacher(string name, string dept, string subject, double salary){
    this->name = name;
    this->dept = dept;
    this->subject = subject;
    this->salary = salary;
}


    
    //methods
    void changeDept(string newDept){
        dept = newDept;
    }

    //SETTER
    // void setSalary(double s){
    //     salary = s;
    //}
    //GETTER
    // double getSalary(){
    //     return salary;
    // }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Suject: "<<subject<<endl;
    }


};

int main(){
    Teacher t1("Rahul","CS","C++",25000);
    Teacher t2(t1);
    // t1.name = "Rahul";
    // t1.subject = "C++";
    // t1.setSalary(25000);

    // t1.getInfo();

    t2.getInfo(); //COPY CONSTRUCTOR

    // cout<< t1.name<< endl;
    // cout<< t1.getSalary()<< endl;
    // cout<<t1.dept<<endl;

}
