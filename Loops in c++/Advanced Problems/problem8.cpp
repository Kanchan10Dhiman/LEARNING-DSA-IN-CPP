//WAP to check if a number is prime or not (use of break statement).
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
        if(count>2)
        break;
    }
    if(count==2)
        cout<<"prime";
    else
        cout<<"not prime";
     return 0;
}