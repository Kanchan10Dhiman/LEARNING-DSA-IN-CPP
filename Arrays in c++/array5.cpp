//Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int array[]={2,13,6,5};
    int i,mul=1;
    for(i=0;i<=3;i++){
        mul=mul*array[i];
        
    }
    cout<<mul<<endl;
    return 0;
}