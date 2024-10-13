#include<iostream>
using namespace std;


//SELECTION CONTROL STRUCTURE: IF ELSE / IF ELSE LADDER

// int main(){
//     int age;
//     cout<<"Tell me your age: "<<endl;
//     cin>>age;
//     if (age<18 && age>1)
//     {
//         cout<<"you cannot come to my party"<<endl;
//     }
//     else if (age == 18)
//     {
//         cout<<"you will get a kid pass for party"<<endl;
//     }
//     else if (age<1)
//     {
//         cout<<"you are not yet born"<<endl;
//     }
    
//     else{
//         cout<<"you can come to party"<<endl;
//     }

//     return 0;
// }


// SELECTION CONTROL STRUCTURE: SWITCH CASE

int main(){
    int age;
    cout<<"Tell me your age: "<<endl;
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"You are 18";
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;    
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }
}