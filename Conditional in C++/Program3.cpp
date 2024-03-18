//Take positive integer input and tell if it is divisible by 5 and 3.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter: ";
    cin>>a;
    if((a%5==0) && (a%3==0)){
        cout<<"divisible by 5 and 3";
    }
   else{
    cout<<"not divisible by 5 and 3";
}
return 0 ;
}