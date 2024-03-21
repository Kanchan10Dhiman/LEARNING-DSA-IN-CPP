//WAP to print reverse of a given .
#include<iostream>
using namespace std;
int main(){
    int n,a,b=0;
    cout<<"enter any number n";
    cin>>n;
    while(n>0){
    a=n%10;
    b=b*10+a;
    n=n/10;
    }
    cout<<b;
    return 0;

}