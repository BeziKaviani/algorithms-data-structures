# include <iostream>

using namespace std;

/*  Linked lists are data structures that let us store data in non-contiguous memory locations
 *  Linked lists contain nodes which have two important items in them:
 *  1- data
 *  2- address of the next node
 *
 *  In singly linked lists the nodes are connected in one direction
 * */
struct node {
//  Items in node
    int data;
    node *next;

//  Functions

    static int size(node *first) {

        if (first == nullptr) {
            return 0;
        }

        int count = 0;
        node *current;
        current = first;

        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }

    static void add(node *&first, int value, int target, char pos = 'a') {

        if (target < 1) {
            return;
        }

        node *new_node;
        node *current;

        new_node = new node;
        new_node->data = value;
        new_node->next = nullptr;

//      Empty list
        if (first == nullptr) {
            first = new_node;
            return;
        }

//          After the node
        if (pos == 'a') {

            current = first;
            int position = 1;

            while (current != nullptr && position < target) {
                position++;
                current = current->next;
            }
            if (current != nullptr) {
                new_node->next = current->next;
                current->next = new_node;
            }
            return;
        }

//          Before the node
        else if (pos == 'b') {
            current = first;
            if (target == 1) {
                new_node->next = first;
                first = new_node;
                return;
            }

            node *prev;
            int position = 1;

            while (current != nullptr && position < target) {
                position++;
                prev = current;
                current = current->next;
            }
            if (current != nullptr) {
                prev->next = new_node;
                new_node->next = current;
            }
            return;
        }
    }
};

int main() {
    node *head;
    node::add(head, 10, 1, 'a');
    cout << "List: " << head->data << endl;

    node::add(head, 20, 1, 'a');
    cout << "List: " << head->data << " -> " << head->next->data << endl;

    node::add(head, 15, 2, 'b');
    cout << "List: " << head->data << " -> " << head->next->data << " -> " << head->next->next->data << endl;

    return 0;
}