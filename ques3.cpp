// Given two numbers a and b, write a function to print all odd numbers between them.

#include<iostream>
using namespace std;
 void odd(int x,int y){
    if(x>y){ 
     odd(y,x);
     return;
    }
    for(int i=x;i<=y;++i){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    odd(a,b);


}