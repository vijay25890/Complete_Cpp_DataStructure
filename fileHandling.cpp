#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int arr;
    int arr1;
    cout << "Enter your name and age";
    cin >> arr;
    ofstream myfile("xyz.txt", ios::app);
    myfile << arr;
    myfile.close();
    cout << "File write operation sucessfully" << endl;
    ifstream obj("xyz.txt");
    // cin >> arr1;
    cout << "array content: " << arr << endl;
    cout << "File read operation successfully" << endl;
    obj.close();
    return 0;
}