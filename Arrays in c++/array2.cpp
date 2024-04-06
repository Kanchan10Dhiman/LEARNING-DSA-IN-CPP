#include<iostream>
using namespace std;
int main(){
    int i,array[20]={2,3,4,78,6};
    int max=array[0];
    for(i=0;i<=4;i++){
        if(array[i]>max){
            max=array[i];
            
        }
            
    }
    cout<<max;
}