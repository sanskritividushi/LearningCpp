#include <iostream>
using namespace std;

struct node{
    int val;
    node* ptr;
};

class CLL{
    node* first;
    node* last;

    public:

    CLL(){
        first = NULL;
        last = NULL;
    }

    void ins_beg(int val){
        node *n = new node;
        n -> val = val;
        if (first == NULL){
            first = last = n;
            return;
        }
        last -> ptr = n;
        n -> ptr = first;
        first = n;
    }

    void ins_end(int val){
        node *n = new node;
        n -> val = val;
        if (first == NULL){
            first = last = n;
            return;
        }
        last -> ptr = n;
        n -> ptr = first;
        last = n;
    }

    void ins_after_element(int val, int el){
        node *n = new node;
        n -> val = val;
        if (first == NULL){
            cout << "Empty CLL" << endl;
            return;
        }
        node* temp = first;
        while (temp -> ptr != first && temp -> val != el){
            temp = temp -> ptr;
        }
        if (temp -> ptr == first){
            if (temp -> val == el){
                last -> ptr = n;
                n -> ptr = fist;
                last = n;
                return;
            }
            else {
                cout << "Element not found" << endl;
                return;
            }
        }
        n -> ptr = temp -> ptr;
        temp -> ptr = n;
    }

    int del_beg(){
        if (first == NULL){
            cout << "Empty CLL" << endl;
            return -1;
        }
        if (first == last){
            node* temp = first;
            int val = first -> val;
            first = last = NULL;
            delete temp;
            return val;
        }
        node* temp = first;
        int val = first -> val;
        last -> ptr = first -> ptr;
        first = first -> ptr;
        delete temp;
        return val;
    }

    int del_end(){
        if (first == NULL){
            cout << "Empty CLL" << endl;
            return -1;
        }
        if (first == last){
            node* temp = first;
            int val = first -> val;
            first = last = NULL;
            delete temp;
            return val;
        }
        node* temp = first;
        while (temp -> ptr != last){
            temp = temp -> ptr;
        }
        node* temp2 = last;
        int val = last -> val;
        temp -> ptr = first;
        last = temp;
        delete temp2;
        return val;
    }

    int del_particular_el(int el){
        if (first == NULL){
            cout << "Empty CLL" << endl;
            return -1;
        }
        // wrong
        if (first == last){
            if (first->val == el){
                node* temp = first;
                int val = first -> val;
                first = last = NULL;
                delete temp;
                return val;
            }
            else{
                cout << "Element not found."<<endl;
                return -1;
            }
        }
        node* temp = first;
        while (temp -> ptr != last && temp -> ptr -> val != el){
            temp = temp -> ptr;
        }
        if (temp -> ptr == last){
            if (last -> val == el){
                node* temp2 = last;
                int val = last -> val;
                temp -> ptr = first;
                delete temp2;
                return val;
            }
            else {
                cout << "Element not found" << endl;
                return -1;
            }
        }
        node* temp2 = temp -> ptr;
        temp -> ptr = temp -> ptr -> ptr;
        delete temp2;
        return el;
    }

    void print(){
        if (first == NULL){
            cout << "Empty CLL" << endl;
            return;
        }
        node* temp = first;
        while (temp != last){
            cout << temp -> val << " ";
            temp = temp -> ptr;
        }
        cout << temp -> val << endl;
    }
};

int main() {
    CLL cll;

    cll.ins_beg(1);
    cll.ins_beg(2);

    cll.ins_end(3);
    cll.print(); // Output: 2 1 3

    cll.ins_after_element(4, 1); // Insert 4 after 1
    cll.print(); // Output: 2 1 4 3

    cll.del_end(); // Delete from end
    cll.print(); // Output: 2 1 4

    cll.del_beg(); // Delete from beginning
    cll.print(); // Output: 1 4

    cll.ins_end(5);
    cll.print(); // Output: 1 4 5

    cll.del_particular_el(4); // Delete node with value 4
    cll.print(); // Output: 1 5

    cll.del_particular_el(10); // Try deleting non-existent element
    cll.print(); // Output: Element not found message

    return 0;
}