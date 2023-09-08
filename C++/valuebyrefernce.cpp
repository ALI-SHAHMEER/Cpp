#include<iostream>
using namespace std;
void swap(int*x,int*y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x=6,y=7;
    cout<<"Before Swap\n";
    cout<<"The value of x is "<<x<<" and value of y is "<<y<<endl;
    cout<<"After Swap\n";
    swap(x,y);
    cout<<"The value of x is "<<x<<" and value of y is "<<y<<endl;
    return 0;
}