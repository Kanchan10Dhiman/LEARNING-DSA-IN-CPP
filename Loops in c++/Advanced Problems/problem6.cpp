//WAP to print sum of digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int n,b,sum=0;
    cout<<"enter the number n";
    cin>>n;
    while(n!=0){
        b=n%10;
        sum=sum+b;
        n=n/10;

    }
    cout<<sum;

}