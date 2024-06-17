/*
Print the odd Number Triangle pattern
1 
1 3 
1 3 5  
1 3 5 7
 */
#include<iostream>
using namespace std;
int main(){
    int i,j,a;
    for(i=1;i<=4;i++){
        a=1;
        for(j=1;j<=i;j++){
            cout<<a<<" ";
            a=a+2;
        }
        cout<<endl;
    }
    return 0;
}

