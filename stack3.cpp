#include <iostream>
using namespace std;

class Stack
{
private:
    int size = 5;
    int *arr = new int[size];
    int top = -1;

public:
    // adding element to the stack
    void addElement(int ele)
    {
        if (top == size - 1)
        {
            cout << "Stack is full sorry..." << endl;
        }
        else
        {
            top++;
            arr[top] = ele;
        }
    }

    // deleting element to the stack
    void deleteElement()
    {
        if (top == -1)
        {
            cout << "Stack is empty sorry..." << endl;
        }
        else
        {
            top--;
        }
    }

    // displaying element to the stack
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty sorry..." << endl;
        }
        else
        {
            for (int i = 0; i <= top; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }

    // updating element to the stack
    void updateElement(int pos, int value)
    {
        arr[pos] = value;
    }

    // top-most element of the stack
    void topElement()
    {
        cout << arr[top] << endl;
    }

    // search element of the stack
    void search(int value)
    {
        for (int i = 0; i <= top; i++)
        {
            if (arr[i] == value)
            {
                cout << "Position of element is: " << i;
                break;
            }
            else
            {
                continue;
            }
        }
        cout << "-1";
    }

    // size of the stack
    void sizeOfStack()
    {
        cout << top << endl;
    }
};

int main()
{
    Stack obj1;
    obj1.display();
    obj1.sizeOfStack();
    return 0;
}
