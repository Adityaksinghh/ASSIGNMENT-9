// Q2 : Write a function that takes the radius of a circle as an argument and returns its area.
#include<iostream>
using namespace std;
 float areaofcircle(float x){
     float area=3.14*x*x;
     return area;
}
int main(){
    float r;
    cout<<"Enter radius : ";
    cin>>r;
    cout<<"AREA OF CIRCLE: "<<areaofcircle(r);
}