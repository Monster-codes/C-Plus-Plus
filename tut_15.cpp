#include<iostream>
using namespace std;

// Function & Function prototype
// type function-name (arguments);
// int sum(int a, int b);    // ----> Acceptable
// int sum(int a, b);    // ----> Not acceptable
// int sum(int, int);    // ----> Acceptable
int sum(int a, int b){
    //Formal parameters a and b will be taking values from actual parameters num1 and num2
        int c = a+b;
        return c;
    }
void g(void);
    
int main(){
//--------- Function of function Prototypes in c++  --------

    int num1, num2;
    cout<<"Enter first no."<<endl;
    cin>>num1;
    cout<<"Enter second no."<<endl;
    cin>>num2;
// num1 and num2 are actual parameters
    cout<<"sum is: "<<sum(num1, num2)<<endl;
    g();
    return 0;
}          

void g(){
    cout<<"Hello, Good Morning";
}