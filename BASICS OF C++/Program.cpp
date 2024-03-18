#include<iostream>
using namespace std;
int main(){
    // Q.calculate percentage of 5 subjects
    //let the five subjects a,b,c,d,e
     int a=78,b=90,c=65,d=89,e=90;
     int f=(a+b+c+d+e)/5;
     cout<<"avg of 5 subject is:"<<f<<endl;

     //Q.Calculating Simple Interest
 
    int p=400,t=10,r=10,s; // p=principal,t=time period,r=rate of interest,s=simple interest
    s=(p*t*r)/100;
    cout<<"simple interest:"<<s<<endl;
    
    //Write a program to find the circumference of a circle with radius 10 in C++.

    int pie=3.14,rad=10;
    int cir=2*pie*rad; // cir=circumference,rad=radius
    cout<<"circumference of circle:"<<cir<<endl;

    //area of circle
    int radius=2;
    int area=radius*radius*3.14;
    cout<<"area of circle:"<<area<<endl;
    return 0;
}
    
    