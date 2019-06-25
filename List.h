#include <iostream>
#include "Node.h"
using namespace std;

class List {
    private:
        Node *head;
        Node *tail;
    public:
        List() { head = 0; tail = 0;};
        void insert(Node *x) {
            // insert from the front 
            x->next = head;
            x->prev = nullptr;
            if( head != 0)
                head->prev = x;
            head = x;
        }
        void printList(){
            if(head == 0){
                cout << "List is Empty " << endl ;
                return;
            }
            Node* tmp = head ;
            cout << "List is : ";
            while (tmp != nullptr) {
                cout << tmp->key << " " ;
                tmp = tmp->next;
            }
        }

};
