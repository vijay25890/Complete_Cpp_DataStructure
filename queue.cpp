// FIFO Two End
#include <iostream>
using namespace std;
#define n 100

class queue
{
    int *arr;
    int front;
    int rear;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    void push(int x)
    {
        if (rear == n - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        rear++;
        arr[rear] = x;

        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > rear)
        {
            cout << "No elements in queue";
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > rear)
        {
            cout << "No elements in queue";
            return -1;
        }
        return arr[front];
    }

    bool epmty()
    {
        if (front == -1 || front > rear)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    cout << q.peek();
    q.pop();
    cout << q.peek();
    cout << q.epmty();
    return 0;
}