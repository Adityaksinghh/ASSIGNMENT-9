// Q4: Write a function to count the number of digits in a number and then print the square of this number.
#include<iostream>
using namespace std;
int square(int x){
    int s=x*x;
    return s;
}
int count(int x){
    int a=0;
    while(x>0){
        a++;
        x/=10;
    }
    return a;

}
int main(){
    int  n;
    cout<<"Enter a number: ";
    cin>>n;
    int numberofdigit=count(n);
    cout<<"Square of number :  "<<square(numberofdigit);
}