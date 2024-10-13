#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value of num1:\n"; // << THIS IS INSERTION OPERATOR
    cin>>num1; // >>  THIS IS EXTRACTION OPERATOR

    cout<<"Enter the value of num2:\n";
    cin>>num2;

    cout<<"The sum is "<< num1+num2;
    return 0;
}
