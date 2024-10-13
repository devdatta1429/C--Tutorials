#include<iostream>
using namespace std;
int main(){
    
    
    //1. For loop
    //SYNTAX
    // for(intailization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<i<<endl;
    // }
    

    // 2. While loop
    //Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }

    // int i=0;
    // while (i<4)
    // {
    //     cout<<i<<endl;
    //    i++;
    // }
    
    //3. do-While loop
    //Syntax:
    // do
    // {
    //     C++ Statments;
    // }while(condition);
    // int i=0;
    // do
    // {
    //    cout<<i<<endl;
    //    i++;
    // } while (i<4);
    
     
     int i;
    //  int n=6;
    //  do{
    //     cout<<i*n<<endl; 
    //     i++;
    //  }while(i<=10);
    do
    {
        cout<<i<<endl;
        i++;
    } while (i%5==0 && i<50 );
    


    return 0;
}