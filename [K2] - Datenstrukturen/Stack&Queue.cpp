#include <iostream>
#include <stack>  
#include <queue>     
using namespace std;


int main() {
    stack <int>myStack;
    queue <int>myQueue;

    for (int i = 0; i < 10; i++) {
        myStack.push(i);
        myQueue.push(i);
    }
    // Print Data 
    cout << "Stack is " ;
    for (int i = 0; i < 10; i++) {
       cout << myStack.top() << " " ;
        myStack.pop();
    }

    cout << endl << "Queue is " ;
    for (int i = 0; i < 10; i++) {
       cout << myQueue.front() << " " ;
        myQueue.pop();
    }
    // Fill Data
    return 0;
}