//WAP to count digits of a given number.
#include<iostream>
using namespace std;
int main(){
    long long int n,a,count=0;
    cout<<"enter the number";
    cin>>n;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<"count of digits= "<<count;
    return 0;
}