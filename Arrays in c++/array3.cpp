//Given an array of marks of students, if the mark of any student is less than 35 print its roll number. [roll number here refers to the index of the array ].

#include<iostream>
using namespace std;
int main(){
    int array[20]={23,33,60,70};
    int i; //roll number/ index
    for(i=0;i<=3;i++){
        if(array[i]<35){
            cout<<i<<endl;
        }
    }
    return 0;

}



