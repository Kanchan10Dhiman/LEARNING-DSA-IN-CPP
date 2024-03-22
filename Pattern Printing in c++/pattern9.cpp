/*
PRINT THE FLOYD TRIANGLE PATTERN
1
2 3
4 5 6
7 8 9 10
*/
#include<iostream>
using namespace std;
int main(){
    int a=1,i,j;
   
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            cout<<a<<" ";
            a+=1;
        }
        cout<<endl;
    }
    

}
