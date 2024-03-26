//

#include<iostream>
using namespace std;
int main(){
   int a,b,*p,*q,sum;
   cout<<"Enter a";
   cin>>a;
   cout<<"enter b";
   cin>>b;
   p = &a;
   q = &b;
   sum = *p + *q;
   cout<<sum;

   

   return 0;
}