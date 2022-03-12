#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Enter a Char";
    cin>>button;
    switch(button)
    {
        case 'a':
        cout<<"a is pressed";
        break;
    
        case 'b':
        cout<<"b is pressed";
        break;

        default:
        cout<<"enter correct char";
        break;
    }
} 