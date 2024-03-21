//Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter the value of n";
    cin>>n;
    for(i=4;i<=n;i+=3){
        cout<<i<<",";

    }
    return 0;
}