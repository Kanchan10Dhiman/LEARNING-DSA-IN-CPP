//Print all the even numbers from 1 to 100.
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=2;i<=100;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    return 0;
}