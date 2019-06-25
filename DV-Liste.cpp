#include <iostream>
#include "Node.h"
#include "List.h"
using namespace std;

int main() {
    List L;

    Node* N1 = new Node();
    N1->key = 2;
    L.printList();
    L.insert(N1);
    L.printList();
    return 0;
}