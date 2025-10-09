// Implement linear queue using array
// rear always empty location pe hga
// front == rear == 0
// if(front == rear), Q is empty
// condition to check q is full :: 1>(front==0 && rear==(size-1))
// 2>rear==front-1 3>combine two :: rear == (front-1) % (size-1)
#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data)
    {
        if (rear == size) // rear Q se bhr hai
        {
            cout << "Q is full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    void pop()
    {
        if (front == rear)
        {
            cout << "Q is empty" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                // front aur rear ko index 0 pe le aao
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront()
    {
        if (front == rear)
        {
            cout << "Q is empty" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getSize()
    {
        // rear always empty location pe hoga
        return (rear - front); // isme +1 isliye nhi hua kyuki rear empty location pe hota hai
    }
};

int main()
{
    Queue q(10);

    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);

    cout << "Size of Q is " << q.getSize() << endl;

    q.pop();
    cout << "Size of Q is " << q.getSize() << endl;

    cout << "Front element is " << q.getFront() << endl;

    if (q.isEmpty())
    {
        cout << "Q is empty" << endl;
    }
    else
    {
        cout << "Q is not empty" << endl;
    }

    return 0;
}