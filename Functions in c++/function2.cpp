//Given two numbers a and b, write a function to print all odd numbers between them.

#include<iostream>
using namespace std;

int odd(int x,int y){
    for(int i=x+1;i<=y;i++){
        if(i%2==1){
            cout<<i<<" ";
        }
    }
}
 int main(){
    int a;
    cout<<"enter number a";
    cin>>a;
    int b;
    cout<<"enter b";
    cin>>b;
    odd(a,b);

    return 0;
    
 }
