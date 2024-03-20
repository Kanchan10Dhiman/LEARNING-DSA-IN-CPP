//Print the table of ‘n’. Here ‘n’ is an integer which the user will input.
#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter the value of n";
    cin>>n;
    for(i=1;i<=10;i++){
        cout<<n*i<<endl;
    }
    return 0;

}