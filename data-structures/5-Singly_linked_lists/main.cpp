# include <iostream>

using namespace std;

int main(){
/*  Linked lists are data structures that let us store data in non-contiguous memory locations
 *  Linked lists contain nodes which have two important items in them:
 *  1- data
 *  2- address of the next node
 *
 *  In singly linked lists the nodes are connected in one direction
 * */
    struct node {
        int data;
        struct node* next;
    } first_fib{};

//  We have created a fibonacci series with linked lists
    first_fib.data = 1;
    first_fib.next->data = 1;
    first_fib.next->next->data = 2;

    return 0;
}