//Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int i;
    for(i=1;i<=n;i+=i)
    cout<<i<<",";

    return 0;

}
/*
int i=1;

     do{
        cout<<i<<",";
        i=i+i;
    }
    while(i<n);
*/
    