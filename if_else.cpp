#include<iostream>
using namespace std;

int main(){
    int saving;
    cin>>saving;

    if (saving>5000)
    {
        if (saving>10000)
        {
            cout<<"Dubai";
        }
        else
            cout<<"Pune";
        }
    
    else if (saving>2000)
    {
        cout<<"goa";
    }
    else
    {
        cout<<"kolhapur";
    }
    
} 