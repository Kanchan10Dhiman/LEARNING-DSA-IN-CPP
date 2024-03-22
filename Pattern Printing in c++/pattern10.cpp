/*
Print the given pattern(BINARY TRIANGLE)
1
0 1
1 0 1
0 1 0 1
*/
#include<iostream>
using namespace std;
int main(){
    int a=4;
    int i,j;
    for(i=1;i<=a;i++){
        for(j=i;j>=1;j--){
            cout<<j%2;
        }cout<<endl;
    }
}