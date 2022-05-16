#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int size = 10;
    int rear = -1;
    int front = -1;
    int *arr = new int[size];

public:
    void addElement(int ele)
    {
        if (rear == size - 1)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            rear++;
            arr[rear] = ele;
            cout << "Element " << ele << " added sucessfully" << endl;
            if (front == -1)
            {
                front++;
            }
        }
    }

    void removeElement()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Element " << arr[front] << " deleted sucessfully" << endl;
            front++;
        }
    }

    void updateElement(int pos, int value)
    {
        for (int i = 0; i <= rear; i++)
        {
            if (i == pos)
            {
                arr[i] = value;
            }
        }
        cout << endl;
    }

    void searchElement(int value)
    {
        for (int i = 0; i <= rear; i++)
        {
            if (arr[i] == value)
            {
                cout << "Position of element " << value << "is " << i << endl;
            }
        }
    }

    void displayElements()
    {
        for (int i = 0; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void sizeOfQueue()
    {
        if (front == -1)
        {
            cout << "Queue is epmty" << endl;
        }
        else
        {
            cout << rear + 1 << endl;
        }
    }
};

int main()
{
    Queue obj1;
    int value, pos, ch;
    cout << "1.Add Element" << endl;
    cout << "2.Remove Element" << endl;
    cout << "3.Update Element" << endl;
    cout << "4.Search Element" << endl;
    cout << "5.Display Elements" << endl;
    cout << "6.Size of Queue" << endl;
    cout << "7.Exit" << endl;

    do
    {
        cout << "Choose an option:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter an value to be insert:";
            cin >> value;
            obj1.addElement(value);
            break;

        case 2:
            obj1.removeElement();
            break;

        case 3:
            cout << "Enter and position and value to be change:";
            cin >> pos >> value;
            obj1.updateElement(pos, value);
            break;

        case 4:
            cout << "Enter an value to be search:";
            cin >> value;
            obj1.searchElement(value);
            break;

        case 5:
            obj1.displayElements();
            break;

        case 6:
            obj1.sizeOfQueue();
            break;

        case 7:
            cout << "Going to be exit...";
            break;
        }
    } while (ch != 7);
    return 0;
}