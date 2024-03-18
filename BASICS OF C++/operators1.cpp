#include <iostream>
using namespace std;

int main(){
    int a=2;
    int b=3;
    //Arithmetic operators
    cout<<(a+b)<<endl;
    cout<<(a-b)<<endl;
    cout<<(a*b)<<endl;
    cout<<(a/b)<<endl;
    cout<<(a%b)<<endl;

    //Relational operators
    cout<<(4==5)<<endl;
    cout<<(4!=5)<<endl;
    cout<<(4>3)<<endl;
    cout<<(4<=5)<<endl;

    //Assignment operators
    int c=4;
    c+=2;
    cout<<c<<endl;
    c-=2;
    cout<<c<<endl;
    c/=1;
    cout<<c<<endl;

    //Bitwise operators
    
    cout<<(a<<1)<<endl;
    cout<<(a>>1)<<endl;
    cout<<(~a)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a&b)<<endl;
    cout<<(a^b)<<endl;


}
