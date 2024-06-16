/*
Print the following pattern
Input : n = 4
Output :
 A
 A B
 A B C
 A B C D
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            char alphabet= 'A'+j;
            cout<<alphabet<<" ";
        }
        cout<<endl;
    }
    return 0;
}
