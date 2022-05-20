// multiple blocks of memeory linked with each other
// size can be modified
// non-contiguos memory
// insertion and deletion at any point is easier
// in 1st field they will store the data and in 2nd block they will store address of next data
// head is starting point and last block contain null
// multiple blocks of memory linked with each other

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail()

    int main()
{

    return 0;
}