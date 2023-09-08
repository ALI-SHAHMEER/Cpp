#include<iostream>
using namespace std;

class binary{
    private:
        string s;
    public:
        void read();
        void check();
        void change();
        void display();
};

void binary :: read(){
    cout<<"Enter a Binary code"<<endl;
    cin>>s;
}
void binary :: check(){
    for(int i = 0; s[i]!='\0';i++)
    {
        if(s[i]!='0' && s[i]!='1')
        {
            cout<<"It's Not a Binary digit"<<endl;
            exit(0);
        }
    }
    cout<<"It's a Binary digit"<<endl;
}
void binary ::change(){
    cout<<"Changing Binary Number"<<endl;
    for(int i = 0; s[i]!='\0';i++)
    {
        if(s[i]=='0')
        {
            s[i]='1';
        }
        else if(s[i]=='1')
        {
            s[i]='0';
        }
    }
}
void binary ::display(){
    cout<<"Displaying numbers"<<endl;
    for(int i=0;s[i]!='\0';i++)
    {
        cout<<s[i];
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    b.check();
    b.change();
    b.display();
    return 0;
}