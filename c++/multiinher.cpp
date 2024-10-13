#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
};
class student : public person{
      public:
      int rollno;
};
class gradStudent : public student{
    public:
    string researchArea;
};
int main(){
    gradStudent s1;
    s1.name = "rahul";
    s1.researchArea = "QP";
    cout<<s1.name<<endl;
    cout<<s1.researchArea<<endl;
    
    return 0;
}