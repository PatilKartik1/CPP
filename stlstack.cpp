#include <iostream>
#include <stack>
using namespace std;
int main()
{

    stack<string> s;

    s.push("Kartik");
    s.push("Anil");
    s.push("Patil");

    cout << "Top element: " << s.top() << endl;

    s.pop();

    cout << "Top element: " << s.top() << endl;

    cout << "size of stack: " << s.size() << endl;

    cout << "Empty or not empty stack: " << s.empty() << endl;
}