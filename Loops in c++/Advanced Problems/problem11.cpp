//WAP to print reverse of a given number.
#include<iostream>
using namespace std;
int main(){
    long int n,a;
    cout<<"enter number";
    cin>>n;
    while(n>0){
        a=n%10;
        cout<<a;
        n=n/10;
    }
    cout<<" is reversed number";
    return 0;
}