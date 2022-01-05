//fixed size 
#include<iostream>
using namespace std;

int main()
{
    // int array[4]={10,20,30,40};
    // cout<<array[2];
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

} 