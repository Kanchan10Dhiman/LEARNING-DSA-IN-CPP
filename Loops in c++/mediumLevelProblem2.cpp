//Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int i=1;

     do{
        cout<<i<<",";
        i=i+i;
    }
    while(i<n);
    return 0;

}