//WAP to check if a number is prime or not (use of break statement).
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the number";
    cin>>n;
    for(i=2;i<=n;i++){
        if(n%i==0)
         break;
    }
    if(i==n){
        cout<<"is prime number";
    }
    else{
        cout<<"not a prime number";
    }
}
