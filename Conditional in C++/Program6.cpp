//Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter
#include<iostream>
using namespace std;
int main(){
    int length=20,breadth=10,area,perimeter;
    area=length*breadth;
    perimeter=2*(length+breadth);
    if(area>perimeter){
        cout<<"area is greater than the perimeter";
    }
    else {
        cout<<"area is not greater";
    } 

return 0;

    
}