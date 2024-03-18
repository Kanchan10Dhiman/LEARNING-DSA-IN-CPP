//Take 3 positive integers input and print the greatest of them.
#include<iostream>
using namespace std;
int main(){
    int a=11,b=8,c=6;
    if(a>b && a>c){
        cout<<"a is graeter";
    }
    else if(b>c){
        cout<<"b is greater";
    }
    else{
        cout<<"c is greater";
    }

}