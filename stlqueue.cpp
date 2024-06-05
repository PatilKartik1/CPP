#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;

    q.push("Kartik");
    q.push("Anil");
    q.push("Patil");
    cout << "Size before the pop: " << q.size() << endl;

    cout << "First element of the queue: " << q.front() << endl;

    q.pop();
    cout << "First element of the queue: " << q.front() << endl;

    cout << "Size after the pop: " << q.size() << endl;
}