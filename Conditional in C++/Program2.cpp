//Take positive integer input and tell if it is a three digit number or not.
#include<iostream>
using namespace std;
int main(){
    int a=567;
    //cin>>a;
    if(a>99 && a<1000){
        cout<<"three digit number";
    }
    else{
        cout<<"not three digti number";
    }
}