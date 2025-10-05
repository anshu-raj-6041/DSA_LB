// Queue is a DS in which we store data in FIFO order (used in Graph(Traversal), Sliding Windows)
// starting me front/rear same jgh pe hota hai
// insertion => rear
// removal => front
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // creation
    queue<int> q;

    // insertion
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);

    // size
    cout << "Size of queue is :: " << q.size() << endl;

    // removal
    q.pop();
    cout << "Size of queue is :: " << q.size() << endl;

    if (q.empty())
    {
        cout << "Q is empty" << endl;
    }
    else
    {
        cout << "Q is not empty" << endl;
    }

    cout << "Front element is " << q.front() << endl;

    return 0;
}