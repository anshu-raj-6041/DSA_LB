#include <iostream>
using namespace std;

// using array implement stack
class Stack {
    public:

    int* arr;
    int top;    // top shows index of element of array
    int size;   // array ka size

    // constructor
    Stack(int size) {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // functions
    void push(int data) {
        if((size-top) > 1) {
            // space available
            // insert
            top++;
            arr[top] = data;
        }
        else {
            // space not available
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if(top == -1) {
            // stack is empty
            cout << "Stack Underflow" << endl;
        }
        else {
            top--;
        }
    }

    int getTop() {
        if(top == -1) {
            cout << "There is no element in the Stack" << endl;
        }
        else {
            return arr[top];
        }
    }

    int getSize() {
        return (top+1);
    }

    bool isEmpty() {
        if(top == -1) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main(){
    Stack s(10);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
    while(!s.isEmpty()) {
        cout << s.getTop() << " ";
        s.pop();
    }
    cout << endl;

    cout << "Size of Stack: " << s.getSize();
    s.pop();
    return 0;
}