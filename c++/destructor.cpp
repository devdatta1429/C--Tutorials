#include<iostream>
using namespace std;

int count = 0;
class Num{
    public:
    //destructor is used to free the dynamically allocated memory or allocated memory by constructors or objects
    Num(){
        count++;
        cout<<"this is the time when constructor is called for object number"<<count<<endl;
    }
    ~Num(){
        cout<<"This is the time when my destructor is called for object number"<<count<<endl; 
        count--;
    }
};
int main(){
    cout<<"we r inside our main function"<<endl;
    cout<<"creating 1st object n1"<<endl;
    Num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two more objects"<<endl;
        // Num n2, n3;
        // cout<<"Exiting this block"<<endl;
    }
    // cout<<"back to main "<<endl;
    return 0;
}