//WAP to check if a number is prime or not (use of break statement).
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
        if(count>2)
        break;
    }
    if(count==2)
        cout<<"prime";
    else
        cout<<"not prime";
     return 0;
}
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    bool flag=true; 
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            flag = false;
            break;

        }
    }   
    if(n==1) cout<<" 1 is neither prime nor composite";
    if(flag==true) cout<<"its a prime number";
    else cout<<n<<" is a composite number";
}*/