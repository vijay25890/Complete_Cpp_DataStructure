#include <iostream>
using namespace std;

class Stack
{
    int n = 5;
    int *arr = new int[n];
    int top = -1;

    void push(int x)
    {
        if (top >= n - 1)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            top--;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Nothing in stack" << endl;
        }
        else
        {
            for (int i = 0; i <= top; i++)
            {
                cout << arr[i];
            }
        }
    }
};

int main()
{
    Stack S;
    int ch, ele;
    do
    {
        cout << "Enter your choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "" push(ele);
        }
    } while (ch != 4);
    return 0;
}