//Find the minimum value out of all the elements in the array.
#include<iostream>
using namespace std;
int main(){
    int i,array[20]={2,3,0,1,6};
    int min=array[0];
    for(i=0;i<=4;i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    cout<<min;
    return 0;
}