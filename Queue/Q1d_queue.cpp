// Doubly Ended Queue (Deque)
#include <iostream>
using namespace std;

class Deque
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushRear(int data)
    {
        if (front == 0 && rear == (size - 1))
        {
            cout << "Q is full" << endl;
            return;
        }
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        // circular nature
        else if (front != 0 && rear == (size - 1))
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pushFront(int data)
    {
        if (front == 0 && rear == (size - 1))
        {
            cout << "Q is full" << endl;
            return;
        }
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[front] = data;
        }
        // circular nature
        else if (front == 0 && rear != (size - 1))
        {
            front = (size - 1);
        }
        else
        {
            front--;
        }
    }

    void popFront()
    {
        // empty check
        if (front == -1)
        {
            cout << "Q is empty" << endl;
            return;
        }
        // single element ko remove krna
        else if (front == rear)
        {
            arr[front] = -1;
            front = rear = -1;
        }
        // circular nature
        else if (front == (size - 1))
        {
            front = 0;
        }
        // normal flow
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    void popRear()
    {
        if (front == -1)
        {
            cout << "Q is empty" << endl;
            return;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if (rear == 0)
        {
            rear = (size - 1);
        }
        else
        {
            rear--;
        }
    }
};

int main()
{

    return 0;
}