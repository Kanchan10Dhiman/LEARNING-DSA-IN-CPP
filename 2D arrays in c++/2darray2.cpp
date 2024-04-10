//Write a program to add two matrices.
#include<iostream>
using namespace std;
int main(){
    int array1[2][2],array2[2][2],sum[2][2],i,j;
    cout<<"enter 1st matrix";
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>array1[i][j];
        } 
    }
    cout<<"enter 2nd matrix";
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>array2[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum[i][j]=array1[i][j]+array2[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<sum[i][j];
        }
        cout<<endl;
    }
    return 0;

}