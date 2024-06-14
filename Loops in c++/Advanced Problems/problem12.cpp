//Print the factorial of a given number ‘n’.
#include<iostream>
using namespace std;
int main(){
    int i,n,fact=1;
    cin>>n;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact<<" is factorial of "<<n;
    return 0;
}
