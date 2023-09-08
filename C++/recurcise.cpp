#include<iostream>
using namespace std;

int factor(int n)
{
    if(n==1 || n==0)
    {
        return n=1;
    }
    return n * factor(n-1);
}

int main(){
    int n;
    cout<<"Enter number to find factorial"<<endl;
    cin>>n;
    cout<<"The number is "<<n<<" and it's factorial is "<<factor(n)<<endl;
    return 0;
}