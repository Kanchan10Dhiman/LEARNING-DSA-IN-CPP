/*

Print the alphaber square pattern
A B C D 
A B C D
A B C D
A B C D
*/
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            char alphabet='A'+j;
            cout<<alphabet<<" ";
        }
        cout<<endl;
    }
}
