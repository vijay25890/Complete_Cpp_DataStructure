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
            cout << "Element deleted sucessfully:" << arr[top] << endl;
            top--;
        }
    }

    // displaying element to the stack
    void displayElements()
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
            cout << endl;
        }
    }

    // updating element to the stack
    void updateElement(int pos, int value)
    {
        arr[pos] = value;
        cout << endl;
    }

    // top-most element of the stack
    void topElement()
    {
        cout << arr[top] << endl;
    }

    // search element of the stack
    void searchElement(int value)
    {
        for (int i = 0; i <= top; i++)
        {
            if (arr[i] == value)
            {
                cout << "Position of element is :" << i << endl;
            }
        }
    }

    // size of the stack
    void sizeOfStack()
    {
        cout << top + 1 << endl;
    }
};

int main()
{
    Stack obj1;
    int num, option, pos;
    cout << "1:Add element" << endl;
    cout << "2:Delete element" << endl;
    cout << "3:Search element" << endl;
    cout << "4:display element" << endl;
    cout << "5:update element" << endl;
    cout << "6:Top element" << endl;
    cout << "7:Exit" << endl;
    do
    {
        cout << "Select an option:";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Enter an element to add:";
            cin >> num;
            obj1.addElement(num);
            break;

        case 2:
            obj1.deleteElement();
            break;

        case 3:
            cout << "Search an element:";
            cin >> num;
            obj1.searchElement(num);
            break;

        case 4:
            cout << "display an elements:";
            obj1.displayElements();
            break;

        case 5:
            cout << "update an element:";
            cout << "Enter new value";
            cin >> num;
            cout << "Enter position";
            cin >> pos;
            obj1.updateElement(pos, num);
            break;

        case 6:
            cout << "top element:";
            obj1.topElement();
            break;

        case 7:
            break;
        }
    } while (option != 7);
    return 0;
}