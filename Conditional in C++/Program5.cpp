//Write a program to check whether a character is an alphabet or not.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        cout<<"character is an alphabet";
    }
    else{
        cout<<"character is not an alphabet";

    }
 return 0;
}