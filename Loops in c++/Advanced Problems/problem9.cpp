//WAP to print the sum of all the even digits of a given number.
#include<iostream>
using namespace std;
int main(){
    long long int n,sum=0,a;
    cout<<"enter the number";
    cin>>n;
    while(n>0){
        a=n%10;
        if(a%2==0){
            sum+=a;
        }
        n=n/10;
    }
    cout<<"sum of even digits"<<sum;
    return 0;
}