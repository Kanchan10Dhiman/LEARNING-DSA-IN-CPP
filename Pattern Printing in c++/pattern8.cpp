//PRINT THE STAR PLUS PATTERN (N=ODD)
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int a=5;
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            if(i==3 || j==3){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
           
        }
        cout<<endl;
       
    }
}