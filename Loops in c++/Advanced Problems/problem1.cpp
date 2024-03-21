//WAP to print odd numbers from 1 to 100.
#include<iostream>
using namespace std;
int main(){
    int n=100;
    int i;
    for(i=1;i<=100;i++){
        if(i%2==1)
        {
            cout<<i<<",";
        }
        
    }
    cout<<"are odd numbers";
    return 0;
}

