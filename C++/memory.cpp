#include<iostream>
using namespace std;

class shop{
    private:
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void initcount()
    {
        counter = 0;  
    }
    void setprice();
    void displayprice();
};

void shop::setprice()
{
    cout<<"Enter Id of your item"<<endl;
    cin>>itemid[counter];
    cout<<"Enter Price of your item"<<endl;
    cin>>itemprice[counter];
    counter++;
}

void shop::displayprice()
{
    for(int i = 0; i < counter; i++)
    {
        cout<<"Item Id == "<<itemid[i]<<" and price is "<<itemprice[i]<<" $."<<endl;
    }
}

int main(){

    shop store;
    store.initcount();
    store.setprice();
    store.setprice();
    store.setprice();
    store.setprice();
    store.displayprice();
    return 0;
}