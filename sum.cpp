//Program to print sum of two numbers
#include <iostream>
using namespace std;
int sum(int x,int y){ //function definition
    return x+y;
}
int main(){
    int a,b;
    cout<<"Enter 2 numbers : ";
    cin>>a>>b; //Input two numbers
    cout<<"Sum = : "<<sum(a,b)<<endl; //function call
    return 0;
}

