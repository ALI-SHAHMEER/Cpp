#include<iostream>

using namespace std;

class employee{
    private:
        int a,b,c;
    public:
        int d,e;
        void setdata(int a1,int b1,int c1);
        void getdata(){
            cout<<"A = "<<a<<endl;
            cout<<"B = "<<b<<endl;
            cout<<"C = "<<c<<endl;
            cout<<"D = "<<d<<endl;
            cout<<"E = "<<e<<endl;
        }
};
void employee::setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

class student{
    private: 
        string id,name,email,password;
    public:
        string enroll;
    void fetchdata(string stu_id,string stu_name,string stud_email,string stu_password);
    void outdata(){
        cout<<"Student Id: "<<id<<endl;
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Email: "<<email<<endl;
        cout<<"Student Password: "<<password<<endl;
        cout<<"Student Enrol: "<<enroll<<endl;
    }
};
void student::fetchdata(string stu_id,string stu_name,string stud_email,string stu_password){
    id = stu_id;
    name = stu_name;
    email = stud_email;
    password = stu_password;
}

class money{
    private:
        string account_no,account_balance;
    public:
        string name;
    void personal(string accountno,string accountbalance){
        account_no = accountno;
        account_balance = accountbalance; 
    };
    void publish(){
        cout<<"Account Holder Name: "<<name<<endl;
        cout<<"Account Number: "<<account_no<<endl;
        cout<<"Account Balance: "<<account_balance<<endl;
    }
};

int main()
{
    employee ali;
    ali.setdata(65,78,14);
    ali.d = 91;
    ali.e = 810;
    ali.getdata();
    
    student shah;
    shah.fetchdata("BSE-22F-010","Ali Shahmeer","areo5459@gmail.com","$BSE@010");
    shah.enroll = "Software Engineering";
    shah.outdata();

    money nawaz;
    nawaz.personal("BSE-2332-10319-0","1 Trillion $ + 2 Trillion €");
    nawaz.name = "Mia Muhammad Nawaz Sharif";
    nawaz.publish();
    return 0;
}