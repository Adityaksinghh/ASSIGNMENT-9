// Q1 : Write a function to print squares of first n natural numbers, taking n as argument to the function
#include<iostream>
using namespace std;
int square(int x){
    int a=x*x;
     return a;
}
void firstnsquare(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ->  "<<square(i)<<endl;
    }
   
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
   firstnsquare(n);
}