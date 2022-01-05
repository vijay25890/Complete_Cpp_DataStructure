// multiple blocks of memeory linked with each other
// size can be modified
// non-contiguos memory
// insertion and deletion at any point is easier
// in 1st field they can store the data and in wnd block they can store address of next data
// head is starting point and last block contain null

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

int main()
{
    return 0;
}