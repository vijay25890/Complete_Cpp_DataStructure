// stack is list of items in which an item can be added to or removed from the list at one end LIFO manner

#include <iostream>
using namespace std;
#define n 100
class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "No element to pop";
            return;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "No element in stack";
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top == -1;
    }
};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.pop();
    st.pop();
    cout << st.empty();
    cout << st.Top();
    return 0;
}