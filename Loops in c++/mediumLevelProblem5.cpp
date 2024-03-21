//Display this GP - 3,12,48,.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int i=3;
    do{
        cout<<i<<",";
        i=i+i+i+i;
    }
    while(i<=n);
    return 0;
}