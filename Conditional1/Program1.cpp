/*Given the radius of the circle predict whether numerically area of this 
circle is larger than the circumference or not*/
#include<iostream>
using namespace std;
int main(){
    float radius=12;
    float area=3.14*radius*radius;
    float circumference=2*3.14*radius;
    if(area>circumference){
        cout<<"area of circle is larger than circumference";
    }
    else{
        cout<<"circumferenceof circle is larger than area";
    }
}