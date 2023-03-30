#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the 1st side of triangle\n";
    cin>>b;
    cout<<"Enter the 2nd side of triangle\n";
    cin>>c;
    cout<<"Enter the 3rd side of triangle\n";
    cin>>a;
    if (a==b && b==c)
    {
        cout<<"The given triangle is equilateral (having both sides equal)";
    }
     else if (a==b || b==c || c==a)
    {
        cout<<"The given triangle is isosceles (having at least two sides equal)";
    }
    else{
        cout<<"The given triangle is scalene (having all sides unequal)";
    }
    return 0;
}                   
