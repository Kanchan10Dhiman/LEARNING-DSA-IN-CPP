//Take positive integer input and tell if it is divisible by 5 or not.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter ";
    cin>>a;
    if(a%5==0){
        cout<<"Divisible by 5";
    }
    else{
        cout<<"not divisible by 5";
    }
}