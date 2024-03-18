//Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
#include<iostream>
using namespace std;
int main(){
    float x=10,y=0;
    //cin>>x;
    //cin>>y;
    if(x==0){
        cout<<"point in y-axis";
    }else if(y==0){
        cout<<"point in x-axis";
    }
    else if(x==0 && y==0){
        cout<<"point at origin";
    }

    return 0;

}
/*#include<iostream>
using namespace std;
int main(){
    float x=10,y=0;
    if(x==0 && y!=0){
        cout<<"point in y axis";
    }
    else if(y==0 && x!=0){
        cout<<"point in x axis";
    }
    else if(x==0 && y==0){
        cout<<"point at origin";
    }
    return 0;
}
*/