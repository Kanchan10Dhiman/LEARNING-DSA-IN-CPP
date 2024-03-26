//Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int main(){
    int a,b,mul,*ptr1,*ptr2;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;;
    cin>>b;
    ptr1=&a;
    ptr2=&b;
    mul=(*ptr1)*(*ptr2);
    cout<<mul<<endl;
    return 0;

}
