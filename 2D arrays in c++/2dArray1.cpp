//Write a program to print sum of all the elements of a 2D matrix.
#include<iostream>
using namespace std;
int main(){
    int array[2][2],i,j,sum=0;
    cout<<"enter the matrix:";
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>array[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum=sum+array[i][j];

        }
        
    }
    cout<<sum<<endl;
}


