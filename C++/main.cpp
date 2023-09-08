#include<iostream>
using namespace std;

int main()
{
    int i=0;
    char str[10]={"169"};
    while (str[i]!='\0')
    {
        switch (str[i])
        {
        case '1':
            cout << "I\n";
            break;
        case '2':
            cout << "II\n";
            break;
        case '3':
            cout << "III\n";
            break;
        case '4':
            cout << "IV\n";
            break;
        case '5':
            cout << "V\n";
            break;
        case '6':
            cout << "VI\n";
            break;
        case '7':
            cout << "VII\n";
            break;
        case '8':
            cout << "VIII\n";
            break;
        case '9':
            cout << "IX\n";
            break;
        case '1' && '0':
            cout << "X\n";
            break;
        }
        i++;
    }
    return 0;
}