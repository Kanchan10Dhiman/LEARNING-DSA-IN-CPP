//WAP to print sum of digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,a;
    cout<<"enter the number";
    cin>>n;
    while(n>0){
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    cout<<"sum of digits= "<<sum;
    return 0;
}