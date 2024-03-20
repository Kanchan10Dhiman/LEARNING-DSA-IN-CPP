//Display this AP - 1,3,5,7,9.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the number";
    cin>>n;
    for(i=1;i<=n;i+=2){
        cout<<i<<",";
    
    }
    
    return 0;
}
/* using while loop.
int n;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i<<",";
        i+=2;
        
    }*/
