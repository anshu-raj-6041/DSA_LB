// Circular Queue
// front == rear == -1
// if(front == rear) then single element
#include <iostream>
using namespace std;

class cirQueue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    // constructor
    cirQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        // Q is full
        if (front == 0 && rear == (size - 1))
        {
            cout << "Q is full" << endl;
        }
        // single element case => first element ko insert krna hai
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        // circular nature
        else if ((rear == size - 1) && (front != 0))
        {
            rear = 0;
            arr[rear] = data;
        }
        // normal flow
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        // empty check
        if(front == -1) {
            cout << "Q is empty" << endl;
        }
        // single element ko remove krna
        else if(front == rear) {
            arr[front] = -1;
            front = rear = -1;
        }
        // circular nature
        else if(front == (size-1)) {
            front = 0;
        }
        // normal flow
        else {
            arr[front] = -1;
            front++;
        }
    }
};

int main()
{

    return 0;
}