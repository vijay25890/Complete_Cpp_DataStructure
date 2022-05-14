// stack is a linear data structure which store the elements in continues manner which uses LIFO manner
// methods: push,pop,isEmpty,isFull,peek,display,change,count

#include <iostream>
using namespace std;

class Stack
{
    int top = -1;
    int *arr = new int[n];
    int n = 5;

public:
    void push(int val)
    {
        if (top > n - 1)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
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
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Stack S;
    int val, c;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Exit" << endl;
    do
    {
        cout << "Enter choice: ";
        cin >> c;
        switch (c)
        {
        case 1:
        {
            cout << "Enter value: ";
            cin >> val;
            S.push(val);
            break;
        }

        case 2:
        {
            S.pop();
            cout << "Element deleted sucessfully" << endl;
            break;
        }

        case 3:
        {
            S.display();
            cout << endl;
            break;
        }

        case 4:
        {
            cout << "Exit" << endl;
            break;
        }

        default:
        {
            cout << "Invalid Choice" << endl;
            break;
        }
        }
    } while (c != 4);
    return 0;
}