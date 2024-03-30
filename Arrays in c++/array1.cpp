//Calculate the sum of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int array[]={8,3,2,6};
    int size=sizeof(array)/sizeof(array[0]);
    int i,sum=0;
    for(i=0;i<size;i++){
        sum=sum+array[i];
        
    }
    
    cout<<sum;
    return 0;
}
