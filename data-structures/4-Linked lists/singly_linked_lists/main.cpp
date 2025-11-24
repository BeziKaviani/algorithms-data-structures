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

    static int size(node *first){
        int count = 0;
        node *current;
        current = first;
        while(current != nullptr){
            count ++;
            current = current->next;
        }
        return count;
    }


    void add(node *&first,int value, int target = 1, char pos = 'a'){
        node *new_node;
        node *current;
        int position = 0;
        new_node = new node;
        new_node->data = value;
        current = first;
        new_node->data = data;
        new_node->next = nullptr;

        if (target == 1){
            new_node->next = first->next;
            first = new_node;
            return;
        }

        else{

//          After the node
            if(pos == 'a'){
                while (current != nullptr && position < target){
                    position++;
                    current = current->next;
                }
                current->next = new_node;
                return;
            }

//          Before the node
            else if (pos == 'b'){
                while (position != target-1){
                    position++;
                    current = current->next;
                }
                current->next = new_node;
                return;
            }
        }
    }
} ;
int main(){

    return 0;
}