//Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
#include<iostream>
using namespace std;
int main(){
    //let sides of truangle a,b,c
    float a,b,c;
    cin>>a>>b>>c;
    
    if(a==b && b==c){
        cout<<"Equilateral triangle";
    }
    else if(a==b || b==c || c==a){
        cout<<"Isosceles triangle";
    }
    else{
        cout<<"Scalene triangle";
    }

}