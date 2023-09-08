#include<iostream>
using namespace std;
int fab(int n)
{
    if(n<2){
        return 1;
    }
    return fab(n-2) + fab(n-1);
}

int main()
{
    int n;
    cout<<"Enter postion to find fabicunic series"<<endl;
    cin>>n;
    cout<<"The facbnics series is "<<fab(n)<<endl;
    return 0;
}